#include <stdio.h>

void paresDecrescente(int n){
    if(n < 0)
        return;

    if(n % 2 != 0)
        n--;

    printf("%d ", n);

    paresDecrescente(n - 2);
}

int main(){
    int n;

    scanf("%d", &n);

    paresDecrescente(n);

    return 0;
}