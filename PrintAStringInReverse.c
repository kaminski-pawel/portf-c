#include <stdio.h>
#include <string.h>

int main(void) {
  char string[] = "0123456789";
  int length = strlen(string);

  for (int i = length; i >= 0; --i)
  {
    printf("%c", string[i]);
  }
  printf("\n");
  return 0;
}

