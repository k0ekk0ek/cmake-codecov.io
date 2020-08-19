#include "foo.h"

extern inline int print_foo(void);

int main(int argc, char *argv[])
{
  print_foo();
  return 0;
}
