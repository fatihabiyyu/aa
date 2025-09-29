import time

print('---- Nilai Matkul Checker')
ans = 'Y'
while ans == 'Y' or ans == 'y':
    nama = input('masukkan nama anda\t: ')
    nim = input('masukkan nim anda\t: ')
    matkul = input('mata kuliah yang akan di cek\t: ')
    nilai = int(input('masukkan nilai dari matkul tsb\t: '))
    print('Data berhasil diinput!')

    if 85 <= nilai <= 100:
        nilaiHuruf = 'A'
    elif 75 <= nilai <= 85:
        nilaiHuruf = 'B'
    elif 65 <= nilai <= 75:
        nilaihuruf = 'C'
    elif nilai < 65:
        nilaiHuruf = 'D'

    time.sleep(1)
    print('sedang diproses')
    time.sleep(0.5)
    dots = '----'
    for dot in dots:
        print (dot)
        time.sleep(0.5)
    print('Nilai dari matkul anda masuk ke kategori ' + nilaiHuruf + '\n')
    time.sleep(1)
    ans = input('inginmencoba lagi? [Y/T] : ')

print('\nProgram berhenti')
    