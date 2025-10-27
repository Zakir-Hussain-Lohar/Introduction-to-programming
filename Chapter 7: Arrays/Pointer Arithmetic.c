#include <stdio.h>
int main() {
    //Pointer Arithmetic Case 1
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u", ptr);
    ptr++;
    printf("ptr = %u", ptr);
    ptr--;
    printf("ptr = %u", ptr);
//     return 0;
// }
           //Pointer Arithmetic Case 2
    float price =100.00;
    float *ptr =&price;
    printf("ptr = %u", ptr);
    ptr++;
    printf("ptr = %u", ptr);
    ptr--;
    printf("ptr = %u", ptr);

// return 0;

// }

        //Pointer Arithmetic case 3
        char star = '*'
        char *ptr = &star;
        printf("ptr = %u\n", ptr);
        ptr++;
        printf("ptr = %u", ptr);
        ptr--;

return 0;
}
