#include <assert.h>
#define MAX_INIT 2147483647
int add(int a, int b){
    long c = (long) a + b;
    assert(c < MAX_INIT && c > - MAX_INIT); //Si es falso se muere
    return (int) c;
}

int substraction(int a, int b){
    long c = (long) a - b;
    assert(c < MAX_INIT && c > - MAX_INIT); //Si es falso se muere
    return (int) c;
}