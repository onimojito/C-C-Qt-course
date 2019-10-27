// Author: Alexander G..

#include <stdio.h>

int main (){
int a = 0;
    for (int i = 0; i < 10; i++) {
        switch (i) {
            case 1:
            case 2:
            case 5:
            case 6: printf("%d\n", a++);
            case 8:
            case 11: printf("%d\n", a++);
            default: a++;
        }
        printf("%d\n", a);
    }
}
