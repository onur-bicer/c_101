#include <stdio.h>

/// İki pozitif tamsayının çarpma işlemini sadece toplama işlemi kullanarak gerçekleştiren program

int main() {
    int i, j, go=0, toplam=0; 

    printf("Çarpılacak sayının ilkini giriniz: ");
    scanf("%d", &i);

    printf("Çarpılacak sayının ikincisini giriniz: ");
    scanf("%d", &j);

    while (go<j) {
    toplam=toplam+i;
    go++;
    }

    printf("Çarpımın sonucu: %d", toplam);
    return 0;
}