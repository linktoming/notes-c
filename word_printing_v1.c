#include <stdio.h>

#define IN 1   /* inside a word */
#define OUT 0  /* outside a word */

/* Write a program that prints its input one word per line. */
int main(){

    int c;
    
    while ((c = getchar()) != EOF){

      if (c == ' ' || c == '\n' || c == '\t'){
        printf("\n");
      }else {

        printf("%c", c );

      }
    }
    
}