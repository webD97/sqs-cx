int main(int argc, char** argv) {
}


int factorial(int number) {
    if (number >= 0) {
        int result = 1;

        for (int i = 1; i <= number; i++) {
            result *= i;
        }

        return result;
    }
}

/**
 * 
 * 100% C2-Abdeckung:
 * 
 * Vollständiger Pfadüberdeckungstest:
 * ->  if evaluiert zu false: 1. Pfad
 *       factorial(0)
 * 
 * ->  if evaluiert zu true:
 *       100% praktisch unmöglich, da
 *       Schleife sehr oft ausgeführt
 *       werden kann: factorial(1),
 *       factorial(2), ...,
 *       factorial((2^64) - 1)
 * 
 * Boundary-Interior-Pfadüberdeckungstest
 * -> if evaluiert zu false: 1. Pfad
 *       factorial(0)
 * -> if evaluiert zu true:
 *       Boundary: factorial(1)
 *       Interior: factorial(2)
 * 
 */
