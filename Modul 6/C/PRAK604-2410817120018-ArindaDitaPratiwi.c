#include <stdio.h>
#include <string.h>
int main(){
  char kode[100], pesan[100];
  scanf("%[^\n]%*c %[^\n]%*c", &pesan, &kode);
  printf("\n");
  int bintang = 0, pagar = 0, i;
  if(strlen(pesan) == strlen(kode)){
    for(i = 0; i < strlen(pesan); i++){
      if(pesan[i] == ' ' && kode[i] == ' '){
        printf(" ");}
      else if(pesan [i] == kode[i]){
        printf("*");
        bintang++;}
      else if(pesan [i] != kode[i]){
        printf("#");
        pagar++;}}
    printf("\n* = %d \n", bintang);
    printf("# = %d \n", pagar);
    if(bintang >= pagar){
      printf("Pesan Asli\n");}
    else{
      printf("Pesan Palsu\n");}}
  else{
    printf("Panjang kalimat berbeda, pesan palsu");}
  return 0;}