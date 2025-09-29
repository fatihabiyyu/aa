import cv2
import mediapipe as mp
import pyautogui

# Inisialisasi kamera
cap = cv2.VideoCapture(0)
if not cap.isOpened():
    print("Kamera tidak bisa dibuka.")
    exit()

# Inisialisasi MediaPipe dan PyAutoGUI
mp_hands = mp.solutions.hands
mp_drawing = mp.solutions.drawing_utils
hand_detector = mp_hands.Hands(max_num_hands=1)  # maksimal 1 tangan (lebih stabil)
screen_width, screen_height = pyautogui.size()
index_x = 0
index_y = 0

while True:
    ret, frame = cap.read()
    if not ret:
        print("Gagal membaca frame.")
        break

    frame = cv2.flip(frame, 1)
    frame_height, frame_width, _ = frame.shape
    rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
    output = hand_detector.process(rgb_frame)

    # ✅ Tambahkan pengecekan ini agar tidak crash
    if output and output.multi_hand_landmarks:
        for hand in output.multi_hand_landmarks:
            mp_drawing.draw_landmarks(frame, hand, mp_hands.HAND_CONNECTIONS)
            landmarks = hand.landmark

            for id, landmark in enumerate(landmarks):
                x = int(landmark.x * frame_width)
                y = int(landmark.y * frame_height)

                if id == 8:  # jari telunjuk
                    cv2.circle(frame, (x, y), 10, (0, 255, 255), -1)
                    index_x = screen_width / frame_width * x
                    index_y = screen_height / frame_height * y
                    pyautogui.moveTo(index_x, index_y)

                if id == 4:  # ibu jari
                    cv2.circle(frame, (x, y), 10, (0, 255, 255), -1)
                    thumb_x = screen_width / frame_width * x
                    thumb_y = screen_height / frame_height * y
                    if abs(index_y - thumb_y) < 20:
                        pyautogui.click()
                        pyautogui.sleep(1)
                        print('Click')
                        # pyautogui.click()  # aktifkan kalau mau klik beneran

    cv2.imshow('Virtual Mouse', frame)
    if cv2.waitKey(1) & 0xFF == 27:  # ESC
        break

cap.release()
cv2.destroyAllWindows()
