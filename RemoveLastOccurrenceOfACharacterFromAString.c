#include <stdio.h>
#include <string.h>

int main(void)
{
  char string[] = "Microsoft";
  char to_remove = 'o';
  int length = strlen(string);
  int i = length - 1;

  while (i >= 0)
  {
    if (string[i] == to_remove) break;
    i--;
  }

  if (i >= 0)
  {
    while (i < length) {
      string[i] = string[i+1];
      i++;
    }
  }

  printf("%s\n", string);

  return 0;
}

