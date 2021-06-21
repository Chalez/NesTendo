//
// Created by charl on 11/8/2019.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int checkFileType(char* fileName){
    if(strstr(fileName, ".nes")){
        printf("\nFound file with .nes Extension: %s\n\n", fileName);
        return 1;
    }else{
        printf("\nGiven file did not contain .nes extension\n");
        printf("\nRerun program with .nes file\n\n");
        exit(1);
    }
}

int getFileSize(FILE *rom){

    int fileSize;

    fseek(rom, 0, SEEK_END);
    fileSize = ftell(rom);
    printf("\nSize of rom: %d bytes \n\n", fileSize);

    return fileSize;

}
