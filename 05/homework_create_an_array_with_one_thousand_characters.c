//Author: Alexander G.

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000

int main (){
    int a[MAX_SIZE];
    for (int i = 0;
    i<MAX_SIZE; i++){
    a[i] = (char)(rand()%26 + 'A');
    printf("a[%d] = %c\n", i, a[i]);
    }
    return 0;
}
