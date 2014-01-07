#include <stdio.h>
/* Print Fahrenheit-Celsius table
       for fahr = 0, 20, ..., 300 */
int main(){

  int lower = 0, upper = 300, step = 20;
  int fahr = lower, celsius;
  while (fahr<=upper){
    celsius = 5*(fahr - 32)/9;
    printf("%3d\t%6d\n", fahr,celsius);
    fahr+=step;
  }

}