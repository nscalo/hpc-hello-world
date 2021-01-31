#include <cstdio>

int main() {
#ifdef __INTEL_COMPILER
  // Only compiled with Intel Compiler
  printf("Hello world from Intel compiler");
  int value = 1<<17;
  printf("%d", value);
#elif __GNUC__
  // Only compiled with GNU Compiler
  printf("Hello world from GNU compiler");
#endif
}