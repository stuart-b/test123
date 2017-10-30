#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{

  char* a = "abcdefg";
  char b[2];
  
  sscanf(a, "%s", b);
  
  
  return 0;
}
