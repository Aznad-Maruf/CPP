#include<bits/stdc++.h>
using namespace std;

template<typename T>

T maxi(T a,T b){
    if(a>b)return a;
    else
        return b;
}
template<typename T>
T mini(T a,T b){
    return(a<b) ? a:b;
}

int main(){
    cout<<maxi<double>(2.222,2.232)<<endl;
    cout<<mini<string>("aaB","Aab")<<endl;
}
