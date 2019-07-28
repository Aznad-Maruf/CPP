#include<bits/stdc++.h>
using namespace std;

int main(){
    int ara[]={1,2,3};
    for(int a : ara){
        cout<<a<<endl;
    }
    vector<int>v[3];
    v[1].push_back(1);
    v[1].push_back(2);
    v[2].push_back(5);
    int s=1;
cout<<endl;
    for(int c : v[1]){
        cout<<c<<endl;
    }
cout<<endl;
    vector<int> i;
    i.push_back(10);
    i.push_back(20);
    for(auto x : i){
        cout<<x<<endl;
    }

}
