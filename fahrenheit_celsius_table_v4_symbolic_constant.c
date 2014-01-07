#include <stdio.h>
/* Print Fahrenheit-Celsius table
       for fahr = 0, 20, ..., 300 */
#define LOWER 0    /* lower limit of table */
#define UPPER 300  /* upper limit */
#define STEP 20    /* step size */

int main(){

  int fahr;
  for (fahr = LOWER; fahr <= UPPER; fahr += STEP){

    printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    
  }

}