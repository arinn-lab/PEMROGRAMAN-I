#include <stdio.h>
int main(){
    int a; char b;
    scanf("%d %c", &a, &b);
    for (int i = 1; i < 51; i++){
        if(i % a == 0){printf("%c ", b);}
        else{printf("%d ", i);}}
    return 0;}