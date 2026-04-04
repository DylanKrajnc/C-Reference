#include <stdio.h>

typedef double (*op)(int, double);

double multiply(int n, double d)
{
  return n*d;
}

op get_op()
{
  return &multiply;
}

int main(int argc, const char argv[])
{
  op pfunc = get_op();
  printf("result: %.2f\n", (*pfunc)(2, 5.0));

  return 0;
}
