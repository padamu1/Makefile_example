#include <stdio.h>
#include "function_help.h"

void multiplication_table(){
    for (int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            temptable[i][j] = table1[i][0] * table2[0][j];
            for(int k =1;k<row;k++){
                temptable[i][j] = temptable[i][j] + table1[i][k]*table2[k][j];
            }
        }
    }
    for(int i=0; i<row;i++){
        for(int j=0; j<row;j++){
            printf("%d ",temptable[i][j]);
        }
        printf("\n");
    }
}
