#include <stdio.h>
int main (){
    int sepatu_A = 400000;
    int sepatu_B = 350000;
    printf("Harga sepatu A adalah %d\n", sepatu_A);
    printf("Harga sepatu B adalah %d\n", sepatu_B);
    printf("Sepatu A mendapatkan diskon 13%% sehingga harganya menjadi %d\n", sepatu_A-(sepatu_A*13/100));
    printf("Sepatu B mendapatkan diskon 21%% sehingga harganya menjadi %d\n", sepatu_B-(sepatu_B*21/100));
    return 0;
}