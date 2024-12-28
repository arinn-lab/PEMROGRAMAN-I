#include <stdio.h>
int main(){
    int n1, n2, i;
    scanf("%d %d", &n1, &n2);
    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
        return 0;}
    else {int baris1[n1], baris2[n2];
    for (i = 0; i < n1; i++){
        scanf("%d", &baris1[i]);}
    for (i = 0; i < n2; i++){
        scanf("%d", &baris2[i]);}
    for (i = 0; i < n1; i++){
        printf("%d ", baris1[i] * baris2[i]);}}
    return 0;}