X = int(input("masukkan bilangan bulat: "))

if 0 <= X <= 10:
    print("Satuan")
elif 10 <= X < 1000:
    print("Ratusan")
elif 1000 <= X < 10000:
    print("Ribuan")
elif 10000 <= X < 100000:
    print("Puluhan ribu")
else:
    print("Bilangan di luar rentang yang ditentukan")
    