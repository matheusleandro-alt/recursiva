#include <stdio.h>

long long fatorial(int n){
    if(n == 0 || n == 1)
        return 1;

    return n * fatorial(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);

    printf("%lld\n", fatorial(n));

    return 0;
}