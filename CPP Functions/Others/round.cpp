/***
float val = 37.777779;

float rounded_down = floorf(val * 100) / 100;  //  Result: 37.77
float nearest = roundf(val * 100) / 100;  // Result: 37.78
float rounded_up = ceilf(val * 100) / 100;      // Result: 37.78

***/




#include<bits/stdc++.h>
using namespace std;

int main(){
    int a_i, b_i, n;
    double dd;
    dd = 3.333333333;
    dd = roundf(dd*100)/100;
    cout<<dd<<endl;
}


