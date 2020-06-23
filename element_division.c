#include <stdio.h>
#include "function_help.h"
void element_division_table(){
    printf("1번째 행렬 \n");
    for(int i=0; i<row;i++){
        for(int j=0; j<row;j++){
             printf("%d ",table1[i][j]/divide);
         }
         printf("\n");
    }
    printf("2번째 행렬 \n");
    for(int i=0; i<row;i++){
        for(int j=0; j<row;j++){
            printf("%d ",table2[i][j]/divide);
        }
        printf("\n");
    }
}

