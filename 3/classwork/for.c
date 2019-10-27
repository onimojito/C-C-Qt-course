// Author: Alexander G..

#include <stdio.h>

int main (){
int a = 0;
    for (int i = 0; i < 10; i++) {
        switch (i) {
            case 1: break;
            case 2: break;
            case 5: break;
            case 6: printf("%d\n", a++);
            case 8: break;
            case 11: printf("%d\n", a++);
            default: a++;
        }
        printf("%d\n", a);
    }
}
