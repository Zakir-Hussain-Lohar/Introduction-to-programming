#include <stdio.h>
int main() {
    int benazir[5];
    //input
     int *ptr =benazir[0];
    for(int i =0; i<5; i++){
        printf("%d index:", i);
        scanf("%d", &benazir[i]);
    }
    //output
     for(int i =0; i<5; i++){
    printf("%d index =%d\n", i, benazir[i]);
 
     }
    return 0;
}