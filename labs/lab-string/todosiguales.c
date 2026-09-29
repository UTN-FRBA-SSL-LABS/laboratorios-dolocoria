#include <stdio.h>
#include "String.h"

int main(int argc, char *argv[]) {
    (void)argc;

    int iguales = 1;

    for (char **arg = argv + 2; *arg != NULL; arg++) {
        if (!AreEqual(argv[1], *arg)) {
            iguales = 0;
            break;
        }
    }

    printf("%d\n", iguales);
    return 0;
}