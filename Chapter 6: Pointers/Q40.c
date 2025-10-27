#include <stdio.h>
//Write a funtion to calculate the sum, product & average of two numbers.
//print that average in the main funtion.
void dowork(int a, int b, int *sum, int *product, int *avg);
int main() {
  int a =3, b =5;
  int sum, prod, avg;
  dowork(a,b, &sum, &prod, &avg);
  printf("sum = %d\n prod = %d\n avg = %d\n",sum , prod , avg);
  return 0;
}
  void dowork( int a, int b, int *sum, int *product, int *avg){
     *sum = a+b;
     *product = a*b;
     *avg = (a+b)/2;
}
    