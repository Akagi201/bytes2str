/*
 * @file bytes2str.c
 * @author Akagi201
 * @date 2014/12/06
 */

#include "bytes2str.h"

/*
 * @brief Convert binary bytes data to printable string.
 * @param[in] in: source binary string
 * @param[in] ilen: source binary string length
 * @param[out] out: destinary string
 * @param[out] olen: dest string length
 * @return errno
 * {0xC8, 0x32, 0x9B, 0xFD, 0x0E, 0x01} --> "C8329BFD0E01"
 */
int bytes2str(const uint8_t *in, size_t ilen, char *out, size_t *olen) {
    const char *o = out;
    const char tab[] = "0123456789ABCDEF";
    int i = 0;

    if (*olen < ilen * 2) {
        return EOVERFLOW;
    }
    for (i = 0; i < ilen; ++i) {
        // print higher 4 bits
        *out++ = tab[*in >> 4];
        // print lower 4 bits
        *out++ = tab[*in & 0x0F];
        ++in;
    }
    *out = '\0';

    *olen = out - o;

    return 0;
}
