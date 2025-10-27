#include<stdio.h>
// 1️⃣ Function Declaration (Prototype)
void greet();
int main(){
 // 3️⃣ Function Call
 greet();
 greet();
 greet(); // called 3 times
return 0;
}
// 2️⃣ Function Definition
void greet(){
    printf("Hello Zakir!\n");
}