#include <stdio.h>
#include <emscripten.h>

int EMSCRIPTEN_KEEPALIVE fibonacci(int n) {
  if (n == 0 || n == 1)
    return 1;
  else 
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  puts("Hello Wasmworld!");
  int result = fibonacci(5);
  printf("fibonacci(5) = %d\n", result);
  return 0;
}
