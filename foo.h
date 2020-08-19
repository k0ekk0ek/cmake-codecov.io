#ifndef FOO_H
#define FOO_H
#include <stdio.h>

#include "bar.h"

inline int print_foo(void)
{
  fprintf(stderr, "foo");
  return 0;
}

#endif /* FOO_H */
