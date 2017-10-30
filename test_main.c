#include <stdlib.h>
#include <stdio.h>
#include <string.h>

extern int k(int *a);

int func(int argc)
{
  unsigned int a = 512;
  int b = 4;
  int c;
  short d = 0;
  d = k(&c);
  //d = c + 0;
  return 4;
}



int main(int argc, char** argv)
{
  func(argc);
  return 0;
}
