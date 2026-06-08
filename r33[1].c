#include <stdio.h>

void inverter(int v[], int inicio, int fim){
    if(inicio >= fim)
        return;

    int aux = v[inicio];
    v[inicio] = v[fim];
    v[fim] = aux;

    inverter(v, inicio + 1, fim - 1);
}

int main(){
    int n;

    scanf("%d", &n);

    int v[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    inverter(v, 0, n - 1);

    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);

    return 0;
}