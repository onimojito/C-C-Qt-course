//Author: Alexander G.

#include <stdio.h>


int create_file(int n);
int main(int f)
{
    int i=0;
    for (;i < 10; i++) {
        create_file(f);
    }
}

int create_file(int n){
    char filename[20];
    int i_counter;
    FILE * fp;
    sprintf(filename,"%d.txt",rand());
    fp = fopen (filename ,"w");
    for (i_counter = 0; i_counter < 10000; i_counter++)
        fprintf(fp, "%d", rand() % 10);
    fclose(fp);
}
