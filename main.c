#include <stdio.h>

int main(void) {
  float r,h,ans;
  printf("Enter R : ");
  scanf("%f",&r);
  printf("Enter H : ");
  scanf("%f",&h);
  ans = (2*3.14*r)*h+2*(3.14*r*r);
  printf("Ans = %f",ans);
  return 0;
}