#include <stdio.h>

void crescente(int n){
    if(n == 0){
        printf("0 ");
        return;
    }

    crescente(n - 1);
    printf("%d ", n);
}

int main(){
    int n;
    scanf("%d", &n);

    crescente(n);

    return 0;
}