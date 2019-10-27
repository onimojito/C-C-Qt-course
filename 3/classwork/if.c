// Author: Alexander G..

#include <stdio.h>
#include <stdbool.h>

int main (){
  bool t = true;
  bool f = false;
  if (f)
    printf("In if 1\n");
  else if (t || f)
    printf("In if 2\n");
  else
    printf("In if 3\n");
}
