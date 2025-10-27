#include<stdio.h>
//Write a Function to convert celcius to fahrenheit.
float convertTem(float celsius)
;
int main(){
    float far = convertTem(0);
    printf("far :%f", far);
    return 0;
}
float convertTem(float celsius ){
    float far = celsius *(9/5) +32;
    return far;
}