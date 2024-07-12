# iot-crypto

Cryptographic functions in C for IoT

## Usage

```c
#include "iot_crypto.h"

void app_main () {
  uint8_t buf[8];
  crypto_random_fill(buf, sizeof(buf));
  // ..
}
```

## API

See [`include/iot_crypto.h`](include/iot_crypto.h) for the public API.

## License

MIT
