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
 * 100% C1-Abdeckung mit zwei Testfällen:
 *
 * factorial(-1)
 * factorial(0)
 *
 */
