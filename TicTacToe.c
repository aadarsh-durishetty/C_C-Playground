#include <stdio.h>
int main()
{
    int tictactoe[3][3];
    int i=0,j=0,empty_cells=0,win=0;
    // read the state of the board
    for (i=0;i<3;i++)
       for (j=0;j<3;j++)
          scanf("%d",tictactoe[i][j]);
    // count the no of empty cells
    for (i=0;i<3;i++)
       for (j=0;j<3;j++)
          if (tictactoe[i][j] == -1)
                empty_cells++;
    if (empty_cells==9){
       printf("initial state");
    }
    else {
        // check row wise
        for (i=0;i<3;i++){
            if (tictactoe[i][0]==1 && tictactoe[i][1]==1 && tictactoe[i][2]==1){
                printf("player 1 wins");
                win=1;
            }
            else if (tictactoe[i][0]==2 && tictactoe[i][1]==2 && tictactoe[i][2]==2){
                printf("player 2 wins");
                win=1;
            }
        // check coloumns wise
        if (tictactoe[0][i]==1 && tictactoe[1][i]==1 && tictactoe[2][i]==1){
                printf("player 1 wins");
                win=1;
        }
        else if (tictactoe[0][i]==2 && tictactoe[1][i]==2 && tictactoe[2][i]==2){
                printf("player 2 wins");
                win=1;
            }
        // check diagonal
        if ((tictactoe[0][0]==1 && tictactoe[1][1]==1 && tictactoe[2][2]==1) || (tictactoe[0][2]==1 && tictactoe[1][1]==1 && tictactoe[2][0]==1)){
                printf("player 1 wins");
                win=1;
        }
        else if  ((tictactoe[0][0]==2 && tictactoe[1][1]==2 && tictactoe[2][2]==2) || (tictactoe[0][2]==2 && tictactoe[1][1]==2 && tictactoe[2][0]==2)){
                printf("player 2 wins");
                win=1;
        }
        // board empty and no one wins
        else if (empty_cells==0){
                        printf("draw");
        }
        else{
                printf("intermediate");
        }
       }
    }