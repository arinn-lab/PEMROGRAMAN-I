#include <stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    int zetsu[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &zetsu[i]);}
    for (i = 0; i < n; i++) {
        printf("%d ", zetsu[i] * (i + 1));}
    return 0;}