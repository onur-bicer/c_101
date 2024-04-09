#include <stdio.h>

/// Bir tamsayının faktöriyelini hesaplayan program

int main() {
    int x,y=1, faktoriyel=1;
    printf("Sayı giriniz: ");
    scanf("%d", &x);

    while (y<=x) {
    faktoriyel = faktoriyel*y;
    y++;
    }

    printf("Sonuç: %d\n", faktoriyel);
    return 0;
}