#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
  const char* from = "12345678--good-boy";
  char *to = (char*) malloc(6);
  char *yo = (char*) malloc(6);
  strncpy(to, from+7, 10);

  printf("\n from=%s , to=%s", from, to ) ;

}
