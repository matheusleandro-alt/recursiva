#include <stdio.h>

int somaVetor(int v[], int n){
    if(n == 0)
        return 0;

    return v[n - 1] + somaVetor(v, n - 1);
}

int main(){
    int n;

    scanf("%d", &n);

    int v[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    printf("%d\n", somaVetor(v, n));

    return 0;
}