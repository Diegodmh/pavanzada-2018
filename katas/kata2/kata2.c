
int strongPasswordChecker(char arr[]){
    unsigned char res = 0;
    unsigned char res2 = 3;
    unsigned char lA = 1;
    unsigned char la = 1;
    unsigned char l1 = 1;
   

    if((sizeof(arr)/sizeof(arr[0]) >= 6 && (sizeof(arr)/sizeof(arr[0]) <= 20){
        res++;
    }
    for(unsiged char i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){

        if(i>=2){
            if(arr[i]==arr[i-1] && arr[i]==arr[i-2]){
                res++;
            }
        }

        if(arr[i] >= 'A' && arr[i] < = 'Z'){
            lA = 0;
        }
        else if(arr[i] >= 'a' && arr[i] < = 'z'){
            la = 0;
        }
        else if(arr[i] >= '0' && arr[i] < = '9'){
            l1 = 0;
        }
    }
    if(lA == 1 || la == 1 || l1 == 1){
        res++;
    }
    res2-=res;

    return res2;
}

int main(){


    return 0;
}