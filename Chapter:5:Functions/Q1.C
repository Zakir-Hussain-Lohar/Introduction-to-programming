#include<stdio.h>
 //function with parameters
    void person(char name[]);
int main(){
    person("Zakir");
    person("Hussain");
   
    return 0;
}
void person(char name[]){
    printf("Hello! %s\n", name);
}
