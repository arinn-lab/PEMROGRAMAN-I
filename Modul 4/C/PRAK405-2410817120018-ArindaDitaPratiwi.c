#include <stdio.h>
int main(){
    int a, b;
    int total = 0;
    scanf("%d %d", &a, &b);
    for(int i = 1; i <= a; i++){int hasil = 0;
        for(int j = i; j >= 1; j--){hasil += j * b;
            printf("(%d*%d)", j, b);
            if(j > 1){printf("+");}}
    printf("=%d\n", hasil);
    total += hasil;}
    printf("%d\n", total);
    return 0;}