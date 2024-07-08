# crypto

Cryptographic functions in C for IoT

## Usage

```c
#include "crypto.h"

void app_main () {
  uint8_t buf[8];
  crypto_random_fill(buf, sizeof(buf));
  // ..
}
```

## API

See [`include/crypto.h`](include/crypto.h) for the public API.

## License

MIT
