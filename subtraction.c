#include <stdio.h>
#include "function_help.h"

void subtraction_table(){
    for (int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            temptable[i][j] = table1[i][j] - table2[i][j];
        }
    }
    for(int i=0; i<row;i++){
        for(int j=0; j<row;j++){
            printf("%d ",temptable[i][j]);
        }
        printf("\n");
    }
}
