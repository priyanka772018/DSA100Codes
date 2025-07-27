#include<iostream>
using namespace std;
int fac(int n) {
    //base case
    if(n==0)
    return 1;
    int ans = n*fac(n-1);
    return ans;
}
int main(){
    int n;
    cout<<"enter number"<<" ";
    cin>>n;
    cout<<fac(n)<<endl;
    return 0;
}