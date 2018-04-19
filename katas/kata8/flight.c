
#define BOOL char
#define TRUE 1
#define FALSE 0

BOOL movies(unsigned char flight_length, unsigned char movies_length[]){


    for(int i = 0; i < sizeof(movies_length)/sizeof(movies_length[0]);i++){
        for(int j = 0; j < sizeof(movies_length)/sizeof(movies_length[0]);j++){
            if((movies_length[i]+movies_length[j]) == flight_length && i != j){
                return TRUE;
            }
        }
    }


    return FALSE;
}

int main(){
    unsigned char fl = 180;
    unsigned char ml[4] = {80,130,110,50};
    unsigned char res = movies(fl,ml);
   

    printf("%d\n", res);

    return 0;
}