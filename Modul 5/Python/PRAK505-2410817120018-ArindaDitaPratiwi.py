def Biodata(tahun_lahir, nama, asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahun_lahir
    print(f"Perkenalkan Nama Saya: {nama}")
    print(f"Umur Saya: {umur}")
    print(f"Saya Adalah Angkatan: {tahun_sekarang}")
    print(f"Asal Saya dari: {asal}")
    print(" ")

tahun_lahir = int(input())
nama = input().strip()
asal = input().strip()
print(" ")
Biodata(tahun_lahir, nama, asal)