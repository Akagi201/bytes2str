/*
 * @file bytes2str.h
 * @author Akagi201
 * @date 2014/12/06
 */

#ifndef BYTES2STR_H_
#define BYTES2STR_H_ (1)

#include <stddef.h>
#include <stdint.h>
#include <errno.h>

int bytes2str(const uint8_t *in, size_t ilen, char *out, size_t *olen);

#endif // BYTES2STR_H_
