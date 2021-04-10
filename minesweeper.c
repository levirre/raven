#include <stdio.h>
/* gcc main.c -o main*/
int field[20][20];
int lines = 20;
int columns = 20;
/*  
Set array element
    field[3][3] = 20;
    printf("%d\n",field[3][3]);
*/


void clearField(){
    int i;
    for(i = 0; i < lines; i++){
        int j;
        for(j=0; j < columns; j++){
            field[i][j] = 0;
        }
    }
}

void printField(){
    int i;
    for(i = 0; i < lines; i++){
        int j;
        for(j=0; j < columns; j++){
            int x = field[i][j];

            printf("%d",x);
        }
    printf("\n");
    }
}

void distMines(){

}

int main(){
    clearField();
    printField();
    return 0;


}
