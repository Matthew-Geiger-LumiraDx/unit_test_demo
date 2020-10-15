#include "example1.h"
#include <math.h>
#include <stdio.h>
#include <iostream>
using namespace std;

double squareRoot(const double a){
    double b = sqrt(a);
    if(b != b) {
        return -1.0;
    }else{
        return sqrt(a);
    }	
}

void deathExit(const int a){
    if(a == 0){
        std::cerr << "Success\n";
        exit(EXIT_SUCCESS);
    } else if (a == 1){
        exit(EXIT_FAILURE);
    }

}

#ifndef TESTING
int main(int argc, char **argv){
    double result = squareRoot(2);
    printf("Result: %f\n", result);
}
#endif
