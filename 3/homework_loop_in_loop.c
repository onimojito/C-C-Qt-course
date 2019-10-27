//Author - Alexander G.


#include <stdio.h>
#include <stdbool.h>

double i = 25423533;
int counter = 0;
int while_exit_condition = 4;
int do_while_exit_condition = 24;
int for_exit_condition = 10;

int main (){
    do {
        do_while_exit_condition--;
        while (while_exit_condition < do_while_exit_condition)
            {
            while_exit_condition++;
            for (;counter < for_exit_condition;) {
                printf("%lf\n", i);
                i = (i*7)/18;
                counter++;
            }
        }
    } while(while_exit_condition != do_while_exit_condition);
}
