#ifndef IOT_CRYPTO_H
#define IOT_CRYPTO_H

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

#endif // IOT_CRYPTO_H
