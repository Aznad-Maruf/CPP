#include<bits/stdc++.h>
#include<tuple> //tuple header
using namespace std;

int main(){
    tuple<string,int,double,string,int> t; /// it can contain some different or same types of element.
    t=make_tuple("K_",0,2.3,"is_",3);
    cout<<get<2>(t)<<endl; /// elements can be accessed by ---> get<serial no.>(tuple name);
    vector<tuple<int,int >>v;
    v.push_back(make_tuple(2,3)); /// we can make a vector of tuple.
    v.push_back(make_tuple(4,5));
    v[0].swap(v[1]); /// t1.swap(t2) ---> swaps two tuples.
    cout<<get<0>(v[0])<<endl; /// and can access like this.
}
