#include <stdio.h>

int main(void);
int trapezoid_area(int top_side, int bottom_side, int height);

int main(void)
{
//  The area of a trapezoid is equal to the sum of both bases(a+b)times he height(h) divided by two.
  printf("%d\n", trapezoid_area(2, 3, 4));
  return 0;
}

int trapezoid_area(int top_side, int bottom_side, int height)
{
  return (top_side + bottom_side) * height / 2;
}