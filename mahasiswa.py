def nilai_huruf(nilaiAkhir):
    if 90 <= nilaiAkhir <= 100:
        return 'A'
    elif 70 <= nilaiAkhir < 90:
        return 'B'
    elif 60 <= nilaiAkhir < 70:
        return 'C'
    elif 50 <= nilaiAkhir < 60:
        return 'D'
    return 'E'
nim = input("Masukkan NIM: ")
nama = input("Masukkan Nama: ")
nilai_uts = float(input("masukkan nilai UTS: "))
nilai_uas = float(input("masukkan nilai UAS: "))
nilai_tugas = float(input("masukkan nilai tugas: "))
nilai_akhir = (0.3 * nilai_uts) + (0.5 * nilai_uas) + (0.2 * nilai_tugas)
print("\nLAPORAN NILAI MAHASiSWA")
print(f"NIM: {nim}")
print(f"nama: {nama}")
print(f"nilai Akhir : {nilai_akhir}")
print(f"Nilai Huruf : {nilai_huruf(nilai_akhir)}")

