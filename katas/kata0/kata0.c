#include <stdio.h>
unsigned char target = 4;
unsigned char array[6] = {8,7,9,3,5,1};
unsigned char r[2];

void kata0(){
    unsigned char num1, num2, i, x;
    unsigned char size =  sizeof(array); 
    for(i = 0; i < size; i++){
        num1 = array[i];
        num2 = target-num1;
        if(num2 != num1){
            r[0] = i;
            for(x = i+1; x < size; x++){
                if(array[x] == num2){
                    r[1] = x;
                    return;
                }
                
            }
        }
    }   
}
int main(){
    kata0(target, array);
    printf("%d %d \n",r[0],r[1]);
    return 0;
}