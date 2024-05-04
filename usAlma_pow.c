#include <stdio.h>
#include <math.h>

// pow fonksiyonu üs almak için kullanılır. Parametrik yapısı şöyledir:
/* double pow(double base, double e); */

int main() {
    double result;
    result = pow(3, 4);

    printf("%f\n", result);
    return 0;
}