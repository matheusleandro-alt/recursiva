#include <stdio.h>

long long fatorialDuplo(int n){
    if(n == 1)
        return 1;

    return n * fatorialDuplo(n - 2);
}

int main(){
    int n;

    scanf("%d", &n);

    printf("%lld\n", fatorialDuplo(n));

    return 0;
}