#include <stdio.h>

int main(void)
{
  int total_seconds = 0;
  int total_minutes = 0;
  int total_hours = 0;
  int days = 0;
  int hours = 0;
  int minutes = 0;
  int seconds = 0;

  printf("Total seconds:");
  scanf("%d", &total_seconds);
  seconds = total_seconds % 60;
  total_minutes = total_seconds / 60;
  minutes = total_minutes % 60;
  total_hours = total_minutes / 60;
  hours = total_hours % 60;
  days = total_hours / 24;

  printf("%d days\n", days);
  printf("%d hours\n", hours);
  printf("%d minutes\n", minutes);
  printf("%d seconds\n", seconds);

  return 0;
}

