A = readline(prompt = "masukkan angka pertama A : ")
B = readline(prompt = "masukkan angka kedua B : ")

A = as.integer(A)
B = as.integer(B)

C = A + B

message(sprintf("Hasilnya adalah C = %d", C))
