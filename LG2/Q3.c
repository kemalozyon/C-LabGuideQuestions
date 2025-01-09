#include <stdio.h>

int main(void){
    int megabyte = 379;
    double bit, byte, kilobyte;

    kilobyte = megabyte * 1024;
    byte = kilobyte * 1024;
    bit = byte * 8;

    return 0;
}