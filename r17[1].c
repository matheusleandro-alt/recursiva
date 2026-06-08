#include <stdio.h>

long long fatorial(int n){
    if(n == 0 || n == 1)
        return 1;

    return n * fatorial(n - 1);
}

long long fatorialQuadruplo(int n){
    return fatorial(2*n) / fatorial(n);
}

int main(){
    int n;

    scanf("%d", &n);

    printf("%lld\n", fatorialQuadruplo(n));

    return 0;
}