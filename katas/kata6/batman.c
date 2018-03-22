#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int W; // width of the building.
    int H; // height of the building.
    scanf("%d%d", &W, &H);
    int N; // maximum number of turns before game over.
    scanf("%d", &N);
    int X0;
    int Y0;
    scanf("%d%d", &X0, &Y0);

    int LX = 0, HX = W-1;
    int LY = 0, HY = H-1;
    // game loop
    while (1) {
        char bombDir[4]; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        scanf("%s", bombDir);
        //printf("%c",bombDir[0] );
       
        
        if(bombDir[0] == 'U' ){
            HY = Y0 - 1;
    
        }
        else if(bombDir[0] == 'D'){
            LY = Y0 + 1;
        }
        
        if(bombDir[1] == 'L' ){
            HX = X0 - 1;
        }
        else if(bombDir[1] == 'R'){
            LX = X0 + 1;
        }
        
       if(bombDir[0] == 'L' ){
            HX = X0 - 1;
        }
        else if(bombDir[0] == 'R'){
            LX = X0 + 1;
        }

        
        Y0 = LY + (HY-LY)/2;
        X0 = LX + (HX-LX)/2;
        printf("%d %d\n",X0,Y0);
    }

    return 0;
}