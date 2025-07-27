#include<iostream>
using namespace std;
int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    //recursive function
    int ans = fib(n-1) + fib(n-2);
    return ans;
}
int main() {
    int n;
    cout<<"enter the number"<<" ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fib(i)<<endl;
    }
    return 0;

}