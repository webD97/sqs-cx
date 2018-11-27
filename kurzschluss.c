int main(int argc, char** argv) {
}


int awesomeFunction(int x, int y) {
    if (x >= 0 && y < 17) {
        return 2 * y;
    }
}

/**
 * Test mit awesomeFunction(-1, 5):
 * ->  Bei Kurzschlussauswertung können
 *     besondere Fehler entstehen:
 *     y wird gar nicht überprüft und
 *     könnte null sein!
 *     => auf Reihenfolge achten!
 */
