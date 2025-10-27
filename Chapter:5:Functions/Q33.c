#include<stdio.h>
// write a funtion to calculate percentage of a student from marks in
// science, math & sanskrit.
int calcPercentage (int science, int math, int sanskrit);
int main (){
    int sci = 98;
    int mth = 95;
    int sakrit = 99;
    printf("percentage is : %d", calcPercentage(mth, sci,sakrit ));

    return 0;
}
int calcPercentage (int science, int math, int sanskrit){
    return ((science + math + sanskrit) /3);
}