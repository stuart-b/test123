#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int i;
  char* a = "1234567890";
   char b[5];
  int *array = malloc(5 * sizeof(int));

  if (array != NULL) {
    array[0] = 13;
    array[1] = 7;
    array[2] = 42;
    array[3] = 0;
    array[4] = 1;

    for (i = 0; i <= 5; i++) 
    {
          printf("array[%d] = %d\n", i, array[i]);
    }
  }
  (void) strcpy(b, a);
   

  return 0;
}
