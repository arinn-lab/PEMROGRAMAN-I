#include <stdio.h>
int main(){
    int x, y, i, j;
    scanf("%d %d", &x, &y);
    if(x < y){for(i = x, j = y; i <= y && j >= x; i++, j--){
            printf("%d %d", i, j);
            if(i < y){printf(" - ");}}} 
    else{for(i = x, j = y; i >= y && j <= x; i--, j++){
            printf("%d %d", i, j);
            if(i > y){printf(" - ");}}}
    return 0;}