#include <stdio.h>

// Problem 1: 3 veya 5'in katları
/* Eğer 3 veya 5'in katı olan 10'un altındaki tüm doğal sayıları listelersek, 3,5,6 ve 9'u elde ederiz. 
Bu katların toplamı 23'tür. 1000'in altındaki tüm 3 veya 5'in katlarının toplamını bulun */

int main() {
    int i;
    int uc=0, bes=0, on_bes=0;
    for (i = 0; i < 1000; i++) {
       if (i % 3 == 0) {
        uc += i;
       }
       if (i % 5 == 0) {
        bes += i;
       }
       if (i % 15 == 0) {
        on_bes += i;
       }
    }
    printf("Toplam: %d\n", uc + bes - on_bes);
    return 0;
}
