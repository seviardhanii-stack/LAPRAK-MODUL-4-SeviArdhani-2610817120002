Sevi_Ardhani = "[Sevi Ardhani]"

while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    
    pilihan = int(input("Masukkan Pilihan : "))
    
    if pilihan == 5:
        print(f"Terimakasih, telah menggunakan kalkulator {Sevi_Ardhani}.")
        break
    elif 1 <= pilihan <= 4:
        v1 = float(input("Masukkan nilai pertama: "))
        v2 = float(input("Masukkan nilai kedua: "))
        
        if pilihan == 1:
            hasil = v1 + v2
            operasi = "penjumlahan"
        elif pilihan == 2:
            hasil = v1 - v2
            operasi = "pengurangan"
        elif pilihan == 3:
            hasil = v1 * v2
            operasi = "perkalian"
        elif pilihan == 4:
            hasil = v1 / v2 if v2 != 0 else 0
            operasi = "pembagian"
            
        print(f"Hasil {operasi} antara {v1:.2f} dengan {v2:.2f} adalah {hasil:.2f}\n")
    else:
        print("Input anda salah, silahkan coba lagi\n")