//Author: Alexander G.

#include <stdio.h>

int main()
{
        for (int i = 1; i<1000; i++)
        {
            if(i == 101)
                goto label;
            fprintf(stdout, "%d\n", i);
        }
        printf("No Goto..\n");
        label:
        printf("Goto rocks!\n");
}
