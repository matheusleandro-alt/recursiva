#include <stdio.h>

int multipRec(int n1, int n2){
    if(n2 == 0)
        return 0;

    return n1 + multipRec(n1, n2 - 1);
}

int main(){
    int n1, n2;

    scanf("%d%d", &n1, &n2);

    printf("%d\n", multipRec(n1, n2));

    return 0;
}