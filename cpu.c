//
// Created by charl on 11/6/2019.
// The NES CPU

#include "cpu.h"
#include <stdlib.h>
#include <stdio.h>

struct opCode{

    u8 opCode;
    u8 addressMode;
    u8 cycles;
    char name[5];

};



cpu* createCPU(){

    cpu *CPU = calloc(sizeof(*CPU), 1);
    CPU->stackPointer = 0xFD;
    CPU->flags = 0x24;
    CPU->programCounter = 0xC000;
    CPU->ram = calloc(65536, 1);
    CPU->stack = calloc(0x100, 1);

    return CPU;

}


void writeByte(cpu *CPU, u16 address, u8 value){

    CPU->ram[address] = value;


}

u8 readByte(cpu *CPU, u16 address){

    return CPU->ram[address];

}

enum addressMode{

    IMMEDIATE,
    ZERO_PAGE,
    ZERO_PAGE_X,
    ZERO_PAGE_Y,
    ABSOLUTE,
    ABSOLUTE_x,
    ABSOLUTE_Y,
    INDIRECT,
    INDIRECT_X,
    INDIRECT_Y,
    IMPLIED,
    ACCUMULATOR,
    RELATIVE

};



void printCPU(cpu *CPU){

    printf("\nAccumulator: %d\n\n", CPU->accumulator);
    printf("\nX-Index: %d\n\n", CPU->xIndex);
    printf("\nY-Index: %d\n\n", CPU->yIndex);
    printf("\nProgram Counter: %d\n\n", CPU->programCounter);
    printf("\nStack Pointer: %d\n\n", CPU->stackPointer);
    printf("\nCurrent Flags: %d\n\n", CPU->flags);

}


