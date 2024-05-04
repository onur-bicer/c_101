#include <stdio.h>

/// Klavyeden girilen bir sayının pozitif tam bölenlerinin ekrana yazdırılması

int main() {
    int x,i=1;
    
    printf("Bir sayı giriniz: ");
    scanf("%d",&x);

    while (i<=x) {
        if (x % i ==0) {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}