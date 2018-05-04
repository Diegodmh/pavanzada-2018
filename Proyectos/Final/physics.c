
#include <stdio.h>

void physics(unsigned char arreglo[]){
    unsigned char T = arreglo[0];
    unsigned char Tof = 1;
    unsigned char res = 1;
    unsigned char counter = 0;
    unsigned char counter2 = 0;
    for(unsigned char i = 0; i < T; i++){
        unsigned char F = arreglo[2+Tof];
        for(unsigned char j = 2+Tof; j < Tof+arreglo[Tof]+2;j++){
            for(unsigned char k = 2+Tof; k < Tof+arreglo[Tof]+2;k++){
                res = 1;
                 F = arreglo[2+Tof];
                if(j != k){
                    
                    while(res >=1){
                        res = arreglo[j]/F;
                      
                        if(arreglo[k] == arreglo[j]){
                             counter2++;
                            res = 1;
                            F = arreglo[2+Tof];
                            break;
                        }
                        
                       if(res == arreglo[k]){
                            counter++;
                            res = 1;
                            F = arreglo[2+Tof];
                            break;
                        }
                        F=F*F;
                    }
                }
            }

        }
        
        printf("%d\n",counter+counter2/2);
        Tof = Tof+arreglo[Tof]+2;
        counter = 0;
        counter2 = 0;
        res = 1;

    }

}

int main(){
    unsigned char arreglo[11]={(2),(3),(2),(2),(2),(2),(3),(2),(2),(1),(4)};
    physics(arreglo);
    return 0;
}