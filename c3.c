int main(int argc, char** argv) {
}


int awesomeFunction(int x, int y, int z) {
    if (x >= 0 && y < 17 ^ z % 2 == 0) {
        printf("Awesome console print!");
    }
}

/**
 * 
 * 100% C3-Abdeckung:
 * 
 * Einfachbedingungsüberdeckungstest:
 * ->  if muss mit (t, t, t) und (f, f, f)
 *     aufgerufen werden:
 *       awesomeFunction(1, 15, 8)
 *       awesomeFunction(0, 22, 3)
 * 
 * Mehrfachbedingungsüberdeckung
 * -> if muss getestet werden mit:
 *    (f, f, f) => awesomeFunction(0, 22, 3)
 *    (f, f, t) => awesomeFunction(0, 22, 8)
 *    (f, t, f) => awesomeFunction(0, 15, 3)
 *    (f, t, t) => awesomeFunction(0, 15, 8)
 *    (t, f, f) => awesomeFunction(1, 22, 3)
 *    (t, f, t) => awesomeFunction(1, 22, 8)
 *    (t, t, f) => awesomeFunction(1, 15, 3)
 *    (t, t, t) => awesomeFunction(1, 15, 8)
 * 
 */
