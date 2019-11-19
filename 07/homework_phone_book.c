//Author: Alexander G.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#define MAX_RECORDS 100
#define MAX_SYMBOLS_IN_QUERY 100
#define MAX_SYMBOLS_IN_CONT_LIST 10000

struct list{
 char name[MAX_SYMBOLS_IN_QUERY];
 char last_name[MAX_SYMBOLS_IN_QUERY];
 char phone_number[MAX_SYMBOLS_IN_QUERY];
};

int main_menu();
void print_main_menu();
int add_contact();
int get_contact_list();
int search_list();

int main (){
    main_menu();
}

void print_main_menu(){
    printf("\e[1;1H\e[2J");
    printf( "\n1. Add contact\n" );
    printf( "2. Get contact list\n" );
    printf( "3. Search\n" );
    printf( "4. Exit\n" );
    printf( "\nYour choice: " );

}

int main_menu(){
    int choice;
    print_main_menu();
    while (scanf( "%d", &choice ) != 1){
        print_main_menu();
        while (getchar() != '\n') {
        }
    }
    switch (choice){
        case 1:{
            printf("\e[1;1H\e[2J");
            add_contact();
            main_menu();
        }
        break;
        case 2:{
            printf("\e[1;1H\e[2J");
            get_contact_list();
            main_menu();
        }
        break;
        case 3:{
            printf("\e[1;1H\e[2J");
            search_list();
        }
        break;
        case 4:{
            printf("\e[1;1H\e[2J");
            break;
        }
        default:
            main_menu();
        }
}

int add_contact(){
    struct list arr[MAX_RECORDS];
    int i = 0;
    FILE * database;
    database = fopen("database.txt", "a+t");
    printf("\e[1;1H\e[2J");
    fprintf(stdout, "\nFirst Name: ");
    getchar(); //Убрать '\n' из потока
    fscanf(stdin, "%[^\n]", arr[i].name);
    printf("\e[1;1H\e[2J");
    fprintf(stdout, "\nLast Name: ");
    getchar(); //Убрать '\n' из потока
    fscanf(stdin, "%[^\n]", arr[i].last_name);
    printf("\e[1;1H\e[2J");
    fputs("\nPhone number: ", stdout);
    scanf("%s", arr[i].phone_number);

    fprintf(database,"%s\t",arr[i].name);
    fprintf(database,"%s\t",arr[i].last_name);
    fprintf(database,"%s\n",arr[i].phone_number);
    fclose(database);
    i++;
    printf("\e[1;1H\e[2J");
    printf("\nSaved.\n\n");
    sleep(1);
    main_menu();
}

int get_contact_list(){
    char contact_list[MAX_SYMBOLS_IN_CONT_LIST];
    FILE * database;
    database = fopen("database.txt", "r");
    printf("\n\n" );
    printf("\e[1;1H\e[2J");
    printf("\n");
    while (fgets(contact_list, MAX_SYMBOLS_IN_CONT_LIST, database) != NULL)
    printf("%s", contact_list);
    fclose(database);
    sleep(3);
    printf("\e[1;1H\e[2J");
    return 0;
}

int search_list(){
    char contact_name[MAX_SYMBOLS_IN_QUERY];
    char contact_last_name[MAX_SYMBOLS_IN_QUERY];
    char contact_phone[MAX_SYMBOLS_IN_QUERY];
    int matches_count;
    char query[MAX_SYMBOLS_IN_QUERY];
    char * match;
    FILE * database;
    printf("\nSearch query: ");
    scanf ("%s", query);
    database = fopen("database.txt", "r");
    while ((fscanf(database, "%s\t%s\t%s", contact_name, contact_last_name, contact_phone)) != EOF){
        match = strstr(contact_name, query);
        if (match == NULL)
            match = strstr(contact_last_name, query);
        if (match == NULL)
            match = strstr(contact_phone, query);
        if (match != NULL){
            printf("\n%s\t%s\t%s", contact_name, contact_last_name, contact_phone);
            matches_count++;
            }
    }
    if (match == NULL){
        printf("\e[1;1H\e[2J");
        printf("\nNo matches found.\n\n");
        }
    else{
        printf("\n");
        printf("\n\n%d match[es] found.\n\n", matches_count);
        }
    sleep(2);
    main_menu();
    fclose(database);
    return 0;
}
