#include <stdio.h>

int main()
{
  int i, n, number, sum = 0;
  printf("Enter value of n: ");
  scanf("%d", &n);
  printf("Enter %d numbers: ", n);
  for(i=0; i<n; i++)
  {
    scanf("%d", &number);
    if (number >= 30 && number <= 90)
    {
      sum += number;
    }
  }
  printf("Sum of numbers b/w 30 and 90: %d\n", sum);
  return 0;
}