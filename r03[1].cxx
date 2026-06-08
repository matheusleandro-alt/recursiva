#include <stdio.h>

int somaCubos(int n){
    if(n == 1)
        return 1;

    return n*n*n + somaCubos(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);

    printf("%d\n", somaCubos(n));

    return 0;
}