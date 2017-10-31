#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int error(int arg)
{
  char a[2];
  char b[2];
  
  a[arg] = 'm';
  
  return arg;
}

int error2(int arg)
{
  char a[2];
  char b[2];
  if (arg > 10)
  {
    a[arg] = 'm';
  }
  return arg;
}


int main(int argc, char** argv)
{
  
  error(argc);
  error2(argc);
  return 0;
}
