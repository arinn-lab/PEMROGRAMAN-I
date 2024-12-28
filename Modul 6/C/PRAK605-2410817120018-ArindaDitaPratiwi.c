#include <stdio.h>
int main(){
    int x, y, z, n, jumlah = 0;
    int matriks1[10][10], matriks2[10][10], hasil[10][10];
    scanf("%d", &n);
    printf("Matriks A\n");
    for(x = 0; x < n; x++){
        for (y = 0; y < n; y++){
            scanf("%d", &matriks1[x][y]);}}
    printf("Matriks B\n");
    for(x = 0; x < n; x++){
        for (y = 0; y < n; y++){
            scanf("%d", &matriks2[x][y]);}}
    for (x = 0; x < n; x++){
        for (y = 0; y < n; y++){
            for (z = 0; z < n; z++){
                jumlah = jumlah + matriks1[x][z] * matriks2[z][y];}
            hasil[x][y] = jumlah;
            jumlah = 0;}}
    printf("Matriks AXB\n");
    for (x = 0; x < n; x++){
        for (y = 0; y < n; y++){
            printf("%d ", hasil[x][y]);}
        printf("\n");}
    return 0;}