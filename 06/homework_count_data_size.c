//Author: Alexander G.

#include <stdio.h>
#include <string.h>
#define LEN 100000

int main()
{
    char str[LEN];
    FILE *file_ptr;
    file_ptr = fopen("homework_test_file.txt", "r");
    if(file_ptr != NULL)
    {
        printf("\nReading file....\n\n");
        fgets(str, LEN, file_ptr);
        fprintf(stdout, "%s", str);
        printf("\n\n");
        printf("         \u27f0 \u27f0 \u27f0 \u27f0\n");
        printf("      File Contents\n\n");
        printf("Datasize (char): %lu bytes.\n\n", (strlen(str) + 1 ) * sizeof(char));

    }
    else
    {
        fprintf(stderr, "Error reading file...\n");
        return 1;
    }
    fclose(file_ptr);
}
