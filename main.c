#include <stdio.h>
#include <stdlib.h>

#include "cpu.h"

int main() {
    cpu *CPU = malloc(sizeof(cpu));

    printCPU(CPU);
}