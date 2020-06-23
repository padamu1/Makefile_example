#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function_help.h"
void tablemake(){
    table1 = malloc(sizeof(int*)*row);
    table2 = malloc(sizeof(int*)*row);
    temptable = malloc(sizeof(int*)*row);
    int i=0;
    for (i = 0; i <row; i++){
        table1[i] = malloc(sizeof(int)*row);
        table2[i] = malloc(sizeof(int)*row);
        temptable[i] = malloc(sizeof(int)*row);
        }
    i = 0;
    srand(time(NULL));
    for(i=0; i<row;i++){
        for(int j = 0; j<row;j++){
            table1[i][j] = rand()%10;
            table2[i][j] = rand()%10;
        }
    }
}
void tableclean(){
    free(table1);
    free(table2);
    free(temptable);
}
