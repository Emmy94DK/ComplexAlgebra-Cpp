#include <stdio.h>
#include "complex.h"

int main() {
	Complex<double> x(3.0,4.0);
    printf("%lf + %lf i\n", x.Re(), x.Im());
    return 0;
}
