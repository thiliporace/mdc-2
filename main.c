#include <stdio.h>

int mdc(int x,int y){
  if (x == y)
    return x;
  if (x % 2 == 0 && y % 2 == 0)
    return 2*mdc(x/2,y/2);
  if (x % 2 == 0 && y % 2 != 0)
    return mdc(x/2,y);
  if (y % 2 == 0 && x % 2 != 0)
    return mdc(x,y/2);
  if (x % 2 != 0 && y % 2 != 0 && (x > y))
    return mdc((x-y)/2,y);
  if (x % 2 != 0 && y % 2 != 0 && (x < y))
    return mdc(x,(y-x)/2);
}

int main() {
  printf("%i",mdc(270,192));
}