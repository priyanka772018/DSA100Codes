#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if(n<=1) {
        return false;
    }
    int count=0;
    for(int i=1; i<=sqrt(n); i++) {
        if(n%i == 0)
        count++;
        if(n%i != i)
        count++;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    cout<<"Prime factors of"<<n<<"are:";
    for(int i=2; i<=n; i++) {
        while(n%i == 0 && isPrime(i)) {
            cout<<i<<" ";
            n /= i;
        }
    }
    cout<<endl;
    return 0;
}
