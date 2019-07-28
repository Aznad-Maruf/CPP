#include<bits/stdc++.h>
using namespace std;

/*
    reverse order priority queue ------->
        priority_queue<int,vector<int>, greater<int> > pq;
    for pair(based on first value) ---->
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        The functions associated with priority queue are:---------->
        empty() – Returns whether the queue is empty
        size() – Returns the size of the queue
        top() – Returns a reference to the top priority element of the queue
        push(g) – Adds the element ‘g’ at the end of the queue
        pop() – Deletes the top priority element from the queue

# priority queue of structure type --->

#include <functional>
struct DereferenceCompareNode : public std::binary_function<Node*, Node*, bool>
{
    bool operator()(const Node* lhs, const Node* rhs) const
    {
        return lhs->getTotalCost() < rhs->getTotalCost();
    }
};

// later...
priority_queue<Node*, vector<Node*>, DereferenceCompareNode> nodesToCheck;



*/

struct node{
    int parent;
    int weight;
};
bool comp(node a,node b){
    return a.weight<b.weight;
}

int main(){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    int n,temp,w,a_i;
    cin>>n;
    for(a_i=1;a_i<=n;a_i++){
        cin>>w>>temp;
        pq.push(make_pair(w,temp));
    }
    for(a_i=1;a_i<=n;a_i++){
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }
}
