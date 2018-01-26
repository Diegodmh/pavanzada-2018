#include <stdio.h>
#include "operations.h"

void printTestMessage(int, char*, char*);

int main(){
    //Test
    int a = 2147483647;
    int b = 2147483647;
    int result = add(a,b);
    int expected = a + b;

    printTestMessage(result == expected,
                    "Addition test passed",
                    "Addition test failed");

    
    //Test Substraction
    int d = 2147483647;
    int f = 2;
    int resultSubs = substraction(a,b);
    int expectedSubs = d - f;

    printTestMessage(resultSubs == expectedSubs,
                    "Substraction test passed",
                    "Substraction test failed");

    return 0;
}

void printTestMessage(int testResult,
                     char *passedMessage,
                     char *failedMessage){

    if(testResult){
        printf("%s\n",passedMessage);
    }
    else{
        printf("%s\n",failedMessage);
    }
}