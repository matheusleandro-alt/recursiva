#include <stdio.h>

int SomaSerie(int i, int j, int k){
    if(i > j)
        return 0;

    return i + SomaSerie(i + k, j, k);
}

int main(){
    int i, j, k;

    scanf("%d%d%d", &i, &j, &k);

    printf("%d\n", SomaSerie(i, j, k));

    return 0;
}