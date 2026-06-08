#include <stdio.h>

void paresCrescente(int n){
    if(n == 0){
        printf("0 ");
        return;
    }

    if(n % 2 == 0){
        paresCrescente(n - 2);
        printf("%d ", n);
    }
    else{
        paresCrescente(n - 1);
    }
}

int main(){
    int n;

    scanf("%d", &n);

    paresCrescente(n);

    return 0;
}