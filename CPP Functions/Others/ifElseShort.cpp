#include<bits/stdc++.h>
using namespace std;

string re( int n ){
    return (n>100)? "Big" : "Not So.";
}

int main(){
    int n;
    cin>>n;
    cout<<re(n)<<endl;
}
