#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    int count=0;
    for(int i=1; i<sqrt(n); i++) {
        if(n%i == 0){
            count++;
        }
        if(n/i != i){
            count++;
        }
    }
    return count=2;
}
int main(){
    int lower,upper;
    lower=1,upper=5;
    for(int i=lower; i<=upper; i++)
    if(isPrime(i))
    cout<<i<<" ";
}

