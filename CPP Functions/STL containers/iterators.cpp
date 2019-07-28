#include<bits/stdc++.h>
using namespace std;

/*

reversing array using pointers----->

void reverseIt(int* ara,int n){
    int *first=ara+1, *last=ara+n;
    while(first<last){
        swap(*first,*last);
        first++;
        last--;
    }
}

.begin() and .end()  -----> .begin() points to the first element.
but .end() points to the first invalid element or the object directly following the last one

int maxi=max_element(v.begin(),v.end())-v.begin();  ----> returns max value's index.
int maxi=*max_element(v.begin(),v.end());  ----> returns max value;

    copy array to vector------>
    int ara[n];
    for(a_i=0;a_i<n;a_i++)cin>>ara[a_i];
    vector<int> v(ara,ara+n);

     sort(v.rbegin(),v.rend() ) ----->  sort in descending order.

    .erase   ------->
    v={1,2,3,4,5};
    v.erase(v.begin()+1,v.begin()+4);   v={1,5};

*/



int main(){
    int n,a_i,num;
    cin>>n;
    int ara[n];
    for(a_i=0;a_i<n;a_i++)cin>>ara[a_i];
    vector<int> v(ara,ara+n);
    //for(vector<int> :: iterator it=v.begin();it!=v.end();it++)cout<<*it<<" ";
    //sort(v.rbegin(),v.rend());

    v.erase(v.begin()+1,v.begin()+5);
    for(vector<int> :: iterator it=v.begin();it!=v.end();it++)cout<<*it<<" ";

}
