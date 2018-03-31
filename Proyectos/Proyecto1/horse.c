#include <stdio.h>
unsigned int tc;
float vf;
unsigned int datos[17] = {(3),(2525),(1),(2400),(5),(300),(2),(120),(60),(60),(90),(100),(2),(80),(100),(70),(10)};
unsigned int j;

void velocidad(unsigned int n, unsigned int pos){
    unsigned int i = 0;
    float tf = 0;
    float th = 0;
    float df = datos[pos-1];
    for(i = 0; i < n*2; i++){
        th = (df-datos[i+pos+1])/datos[i+1+pos+1];
        i++;
        if(th > tf){
            tf = th;
        }
    }
    vf = df/tf;
    printf("Case #%d: %f \n",j,vf);

}

void testCases(){
    tc = datos[0];
    unsigned int pos = 2;
    for(j = 0; j < tc; j++){ 
        velocidad(datos[pos], pos);
        pos += 2+datos[pos]*2; 
    }

}

int main(){
    testCases();
    return 0;

}