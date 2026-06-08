#include <stdio.h>

double serie(int n){
    if(n == 1)
        return 2.0;

    return ((1.0 + n*n)/n) + serie(n - 1);
}

int main(){
    int n;

    scanf("%d", &n);

    printf("%.2lf\n", serie(n));

    return 0;
}