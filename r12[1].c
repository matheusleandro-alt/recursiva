#include <stdio.h>

int menorElemento(int v[], int n){
    if(n == 1)
        return v[0];

    int menor = menorElemento(v, n - 1);

    if(v[n - 1] < menor)
        return v[n - 1];

    return menor;
}

int main(){
    int n;

    scanf("%d", &n);

    int v[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    printf("%d\n", menorElemento(v, n));

    return 0;
}