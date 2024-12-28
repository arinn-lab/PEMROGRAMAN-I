while True:
    print("Pilih program")
    print("1.Penjumlahan")
    print("2.Pengurangan")
    print("3.Perkalian")
    print("4.Pembagian")
    print("5.Exit")
    pilihan = int(input("Masukkan Pilihan: "))
    if 1 <= pilihan <= 4:
        a = float(input("Masukkan nilai pertama: "))
        b = float(input("Masukkan nilai kedua: "))
        if pilihan == 1 :
            hasil = a + b
            print(f"Hasil penjumlahan antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}\n\n")
        elif pilihan == 2 :
            hasil = a - b
            print(f"Hasil pengurangan antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}\n\n")
        elif pilihan == 3 :
            hasil = a * b
            print(f"Hasil perkalian antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}\n\n")
        elif pilihan == 4 :
            hasil = a / b
            print(f"Hasil pembagian antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}\n\n")
    elif pilihan == 5 :
            print("Terima kasih, telah menggunakan kalkulator Arinda Dita Pratiwi\n\n")
            break
    else :
            print("Input anda salah, silahkan coba lagi\n\n")