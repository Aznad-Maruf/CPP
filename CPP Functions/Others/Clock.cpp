/*
#include<bits/stdc++.h>
#include<time.h> /// clock header.
using namespace std;

int main(){
    int testCase,a_t,n,m;
    clock_t strt,endi;
    double timeSpent;
    strt=clock();
    cin>>n;
    while(n--){
            m=n;
        while(m--);
    }
    endi=clock();
    timeSpent=(double)(endi-strt);
    cout<<timeSpent<<endl;
    main();
}
*/

//Fibonacci Series using Recursion
#include<stdio.h>
#include<time.h>
int fib(int n)
{
if (n <= 1)
	return n;
return fib(n-1) + fib(n-2);
}

int main ()
{
int n = 40;

clock_t begi, en;

double time_spent;

begi = clock();

printf("%d\n", fib(n));

en = clock();

time_spent = (double)(en - begi) / CLOCKS_PER_SEC;

printf("\nTime Taken %lf ", time_spent);

getchar();
return 0;
}
