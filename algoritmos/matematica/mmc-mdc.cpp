#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b){
    while (b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int mmc(int a, int b){
    return a * (b / mdc(a, b));
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("MMC de %d e %d = %d\n", a, b, mmc(a, b));
    printf("MDC de %d e %d = %d\n", a, b, mdc(a, b));

    return 0;
}