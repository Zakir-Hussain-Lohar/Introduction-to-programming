#include<stdio.h>
//Make a function that prints Hi C World! two times.
void sayhi();

int main(){
    sayhi();
    sayhi();
    return 0;
}
void sayhi(){
    printf("Hi C world!\n");
}