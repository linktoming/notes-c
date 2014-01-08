#include <stdio.h>
int main(){

  int c, line=0;
  while ((c = getchar()) != EOF){

    if (c == '\n'){
      line++;
    }
  }
  line++;
  printf("%d\n", line);
}