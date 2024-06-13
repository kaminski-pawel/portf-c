#include <stdio.h>
#include <stdbool.h>

bool string_equals(char *s1, char *s2);


int main(void)
{
  char string1[] = "ABCD";
  char string2[] = "ABCD";
  if (string_equals(string1, string2))
  {
    printf("Strings are equal.\n");
  }
  else
  {
    printf("Strings are not equal.\n");
  }
  return 0;
}

bool string_equals(char *s1, char *s2)
{
  if (*s1 != *s2) return false;
  else if (*s1 == '\0' && *s2 ==  '\0') return true;
  else
  {
    s1++;
    s2++;
    return string_equals(s1, s2);
  }
}
