//Author: Alexander G.
//Works for characters from 'a' to 'z' only

#include<stdio.h>
#include<string.h>
#define MAX_SIZE 10000

int create_file_with_random_characters(int n);

int main(int f)
{
   char string[MAX_SIZE];
   char ch;
   int c = 0, count[26] = {0};
   create_file_with_random_characters(f);
   FILE *fp;
   fp = fopen("characters.txt" , "r");
   fgets(string, MAX_SIZE, fp);

   while ( string[c] != '\0' )
   {
      if ( string[c] >= 'a' && string[c] <= 'z' )
         count[string[c]-'a']++;
      c++;
   }
   for ( c = 0 ; c < 26 ; c++ )
   {
      if( count[c] != 0 )
         printf("Symbol '%c' occurs %d times in generated file.\n",c+'a',count[c]);
   }
   return 0;
}

int create_file_with_random_characters(int n){
    char filename[20];
    int c_counter;
    FILE * fp;
    fp = fopen ("characters.txt" ,"w");
    for (c_counter = 0; c_counter < MAX_SIZE; c_counter++)
        fprintf(fp, "%c", rand()%26 + 'a');
    fclose(fp);
    printf("\nFile with random chars created.\n\nCounting chars...\n\n" );
}
