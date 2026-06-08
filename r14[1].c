#include <stdio.h>

void ImprimeSerie(int i, int j, int k){
    if(i > j)
        return;

    printf("%d ", i);

    ImprimeSerie(i + k, j, k);
}

int main(){
    int i, j, k;

    scanf("%d%d%d", &i, &j, &k);

    ImprimeSerie(i, j, k);

    return 0;
}