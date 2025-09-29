n = 0

while n <= 0:
    n = int(input('masukkan nilai n > 0 : '))

while n > 0:
    print('\nanak ayam turun ' + str(n))

    if n  == 1:
        break
    else:
        n = n - 1
    print('Mati satu tinggal ' + str(n))

print('Mati satu tinggal induknya\n')    