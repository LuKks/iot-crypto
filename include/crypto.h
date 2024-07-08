#ifndef CRYPTO_H
#define CRYPTO_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>
#include <stdint.h>

void
crypto_random_fill (uint8_t *buffer, size_t size);

void
crypto_random_fill_hex (char *hex, size_t length);

uint8_t *
crypto_random_bytes (size_t size);

#ifdef __cplusplus
}
#endif

#endif // CRYPTO_H
