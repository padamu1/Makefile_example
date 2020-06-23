#include <stdio.h>
#include "function_help.h"
int printtable();
int function_call(){
    while(1){
        int how = 0;
        printf("실행하고자 하는 항목을 골라주세요 : 1.두행렬 빼기 2.두행렬 곱하기 3. 각각의 행렬을 숫자로 나누기, 4.테이블 새로 만들기 5. 프로그램 종료: ");
        scanf("%d",&how);
        switch(how){
            case 1:
                subtraction_table();
                break;
            case 2:
                multiplication_table();
                break;
            case 3:
                printf("나누고자 하는 숫자를 입력해 주세요:");
                scanf("%d",&divide);
                element_division_table();
                break;
            case 4:
                tableclean();
                tablemake();
                printtable();
                break;
            case 5:
                return 0;
            default :
                printf("올바른 실행문을 입력해주세요");
                break;
        }
    }
}
int printtable(){
    printf("행렬 1: \n"); 
    for(int i = 0 ; i<row ; i++){
        for(int j=0; j<row; j++){
            printf("%d ",table1[i][j]);
        }
        printf("\n");
    }
    printf("행렬 1: \n"); 
    for(int i = 0 ; i<row ; i++){
        for(int j=0; j<row; j++){
            printf("%d ",table2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void main(){
    printf("n차 행렬을 결정해주세요 : ");
    scanf("%d",&row);
    tablemake();
    printtable();
    function_call();
}

