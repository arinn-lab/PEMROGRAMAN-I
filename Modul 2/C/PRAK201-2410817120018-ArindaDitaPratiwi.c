#include <stdio.h>
int main (){
    char Nama[100]; 
    char NIM[20]; 
    char Kelas_Paralel[5]; 
    char TTL[50]; 
    char Alamat[100]; 
    char Hobby[100]; 
    char No_hp[20];

    printf("Nama :"); fgets(Nama,sizeof(Nama),stdin);
    printf("NIM :"); fgets(NIM,sizeof(NIM),stdin);
    printf("Kelas Paralel :"); fgets(Kelas_Paralel,sizeof(Kelas_Paralel),stdin);
    printf("Tempat/Tanggal Lahir :"); fgets(TTL,sizeof(TTL),stdin);
    printf("Alamat :"); fgets(Alamat,sizeof(Alamat),stdin);
    printf("Hobby :"); fgets(Hobby,sizeof(Hobby),stdin);
    printf("No HP :"); fgets(No_hp,sizeof(No_hp),stdin);
    printf("\n");
    
    printf("Nama : %s", Nama);
    printf("NIM : %s", NIM);
    printf("Kelas paralel : %s", Kelas_Paralel);
    printf("Tempat/Tanggal Lahir : %s", TTL);
    printf("Alamat : %s", Alamat);
    printf("Hobby : %s", Hobby);
    printf("No. HP : %s", No_hp);
    return 0;
}