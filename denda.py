from datetime import datetime
def hitung_denda(tanggal_batas, tanggal_kembali):
    keterlambatan_hari = (tanggal_kembali - tanggal_batas).days
    if keterlambatan_hari <= 0:
        return "tidak ada denda."
    elif 1 <= keterlambatan_hari < 7:
        return "Denda 5000 rupiah."
    elif 7 <= keterlambatan_hari < 14:
        return "Denda 10000 rupiah."
    elif keterlambatan_hari >= 14:
        return "Denda 20000 rupiah."
    else:
        return "Input tidak valid."
tanggal_batas_input = input("Masukkan tanggal batas pengambilan (format: DD-MM-YYYY): ")
tanggal_kembali_input = input("Masukkan tanggal kembali (format: DD-MM-YYYY): ")
tanggal_batas =datetime.strptime(tanggal_batas_input, "%d-%m-%Y")
tanggal_kembali =datetime.strptime(tanggal_kembali_input, "%d-%m-%Y")
hasil_denda = hitung_denda(tanggal_batas, tanggal_kembali)
print(hasil_denda)