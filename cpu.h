//
// Created by charl on 11/6/2019.
//

#ifndef NESTENDO_CPU_H
#define NESTENDO_CPU_H

#include <stdint.h>

typedef uint8_t u8;
typedef uint16_t u16;


typedef struct CPU{

    u8 accumulator;
    u8 xIndex;
    u8 yIndex;

    u8 stackPointer;
    u8 flags;
    u16 programCounter;

    u8 *stack;

    u8 *ram;

}cpu;

u8 readByte(cpu *CPU, u16 address);

void writeByte(cpu *CPU, u16 address, u8 value);


void printCPU(cpu *CPU);


#endif NESTENDO_CPU_H