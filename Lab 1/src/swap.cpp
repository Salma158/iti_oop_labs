#include "swap.h"
#include <iostream>
using namespace std;
void swap1(int &x ,int &y){
x = x + y;
y = x - y;
x = x - y;
}

void swap2(int *x ,int *y){
*x = *x + *y;
*y = *x - *y;
*x = *x - *y;
}

void swap3(int x ,int y){
x = x + y;
y = x - y;
x = x - y;
cout << x << " "<< y << endl;
}
