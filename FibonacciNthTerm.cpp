#include<iostream>
using namespace std;
int fib(int n) {
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    // recursive realtion
    int ans = fib(n-1) + fib(n-2);
    return ans;
}
 int main() {
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
 }