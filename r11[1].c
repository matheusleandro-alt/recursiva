#include <stdio.h>

void imprimeVetor(int v[], int n, int i){
    if(i == n)
        return;

    printf("%d ", v[i]);

    imprimeVetor(v, n, i + 1);
}

int main(){
    int n;

    scanf("%d", &n);

    int v[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    imprimeVetor(v, n, 0);

    return 0;
}