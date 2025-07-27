#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n) {
    if(n<=1){
        return false;
    }
    int count=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i == 0){
            count++;
            if(n/i != i)
            count++;
        }
    }
    return count = 2;
}

int main() {
    int num;
    cout<<"Enter a number:";
    cin>>num;
    
    if(isPrime(num))
    cout<<num<<"is a Prime Number."<<endl;
    else
    cout<<num<<"is Not a Prime Number."<<endl;

    return 0;
}
