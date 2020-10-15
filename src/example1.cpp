#include "example1.h"
#include <math.h>
#include <stdio.h>
using namespace std;

double squareRoot(const double a){
    double b = sqrt(a);
    if(b != b) {
        return -1.0;
    }else{
        return sqrt(a);
    }	
}
#ifndef TESTING
int main(int argc, char **argv){
    double result = squareRoot(2);
    printf("Result: %f\n", result);
}
#endif
