#include<stdio.h>
//Q:Print a table of 5 using funtion.
void printable(int n);
int main(){
    int n;
    printf("Enter Number:");
    scanf_s("%d",&n);

    printable(n);//argument/actual parameter
    
    return 0;
}

void printable(int n){
    for(int i =1; i<=10; i++){
        printf("%d\n", i*n);
    }
}