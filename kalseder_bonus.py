print("Program kalkulator sederhana")
print("* => perkalian")
print("/ => pembagian")
print("+ => penjumlahan")
print("- => pengurangan")
print("Contoh Menghitung => 5 / 2 Lalu tekan ENTER")
operand1, operatore, operand2 = input("Silahkan Menghitung Angka : ").split()
def kalkulator(operatore):
    switcher = {
        '*': lambda: float(operand1) * float(operand2),
        '/': lambda: float(operand1) / float(operand2),
        '+': lambda: int(operand1) + int(operand2),
        '-': lambda: int(operand1) - int(operand2)
    }
    return switcher.get(operatore, "Perintah Anda Salah. Silahkan Ulangi")()

print(kalkulator(operatore))

