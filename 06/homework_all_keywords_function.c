//Author: Alexander G.

#include <stdio.h>
#include <string.h>
#define LEN 1000

int list_all_c_keywords();

int main()
{
    list_all_c_keywords();
}

int list_all_c_keywords()
{
    char str[LEN];
    FILE *file_ptr;
    file_ptr = fopen("homework_all_c_keywords.txt", "r");
    if(file_ptr != NULL)
    {
        printf("\nReading file....\n\n");
        while (fgets(str, LEN, file_ptr))
        {
            printf("%s", str);
        }
        fprintf(stdout, "%s", str);
        printf("\n\n");
        fclose(file_ptr);
    }
    else
    {
        fprintf(stderr, "Error reading file...\n");
        return 1;
    }
    printf("         \u27f0 \u27f0 \u27f0 \u27f0\n");
    printf("This is an output of function that lists all c keywords\n\n");
}
