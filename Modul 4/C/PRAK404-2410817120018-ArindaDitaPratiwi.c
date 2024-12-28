#include <stdio.h>
int main(){
    int pilihan;
    float a, b, hasil;
    while (1){
        printf("Pilihan program\n");
        printf("1.Penjumlahan\n");
        printf("2.Pengurangan\n");
        printf("3.Perkalian\n");
        printf("4.Pembagian\n");
        printf("5.Exit\n");
        printf("Masukkan Pilihan: ");
        scanf("%d", &pilihan);
    if(pilihan >=1 && pilihan <=4){
        printf("Masukkan nilai pertama: ");
        scanf("%f", &a);
        printf("Masukkan nilai kedua: ");
        scanf("%f", &b);
    switch(pilihan){
        case 1:
        hasil = a + b;
        printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f \n\n", a, b, hasil);
        break;
        case 2:
        hasil = a - b;
        printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f \n\n", a, b, hasil);
        break;
        case 3:
        hasil= a * b;
        printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f \n\n", a, b, hasil);
        break;
        case 4:
        hasil = a / b;
        printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f \n\n", a, b, hasil);}}
        else if(pilihan == 5){
            printf("Terima kasih, telah menggunakan kalkulator ARINDA DITA PRATIWI\n\n"); 
            break;}
        else{printf("Input anda salah, silahkan coba lagi \n\n");}
        continue;
    return 0;}}