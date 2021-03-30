#include <stdio.h>
#pragma warning (disable:4996)
int main() {
    int a,i;
    int t = 0;
    scanf("%d", &a);
    for (i = 1; i <= a; i++) {
        t += i;
        printf("%d\n",t);
    }
}
