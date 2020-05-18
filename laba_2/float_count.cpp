#include "float_count.h"
#include <iostream>
using namespace std;

float_count::float_count(){value = 0;}

float_count::float_count(int x){value = x;}

float_count::~float_count(){

}

void float_count::show(){
    cout << value;
}

float_count operator + (const float_count& x, const float_count& y){
    return x.value + y.value;
}

float float_count::operator - (float_count x){
    return value - x.value;
}

bool float_count::operator < (float_count x){
	return value < x.value;
}

bool float_count::operator > (float_count x){
	return value > x.value;
}

bool float_count::operator != (float_count x){
	return value != x.value;
}

bool float_count::operator == (float_count x){
	return value == x.value;
}
