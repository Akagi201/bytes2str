/*
 * @file sample.c
 * @author Akagi201
 * @date 2014/12/06
 */

#include <stdio.h>
#include "bytes2str.h""

int main(void) {
    char in[] = {0xC8, 0x32, 0x9B, 0xFD, 0x0E, 0x01};
    char out[32] = {0};
    int olen = sizeof(out);

    bytes2str(in, 6, out, &olen);

    printf("out: %s, olen: %d\n", out, olen);

    return 0;
}
