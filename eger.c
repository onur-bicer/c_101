#include <stdio.h>

int main() {
    int x,y;
    printf("Sayı giriniz: ");
    scanf("%d",&x);

    if (x<0) {
        y=1;
    } else if (x>=0 & x<=2) {
        y=x;
    } else if (x<2 & x<=4) {
        y=3;
    } else if (x>4) {
        y=4-x;
    }
    printf("y = %d",y);
    return 0;
}
