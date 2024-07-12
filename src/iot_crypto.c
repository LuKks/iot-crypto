#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <esp_random.h>

#include "../include/iot_crypto.h"

void
crypto_random_fill (uint8_t *buffer, size_t size) {
  uint32_t value = 0;

  for (size_t i = 0; i < size; i++) {
    if (i % 4 == 0) {
      value = esp_random();
    }

    buffer[i] = value & 0xFF;

    value >>= 8;
  }
}

void
crypto_random_fill_hex (char *hex, size_t length) {
  uint32_t value = 0;

  for (size_t i = 0; i < (length - 1) / 2; i++) {
    if (i % 4 == 0) {
      value = esp_random();
    }

    sprintf(&hex[i * 2], "%02x", (uint8_t) value & 0xFF);

    value >>= 8;
  }

  hex[length - 1] = '\0';
}

uint8_t *
crypto_random_bytes (size_t size) {
  uint8_t *buffer = malloc(size);

  crypto_random_fill(buffer, size);

  return buffer;
}
