#include<iostream>
#include<math.h>
using namespace std;
int getSum(int n) {
    int sum = 0;
    for(int i=1; i<sqrt(n); i++) {
        if(n%i == 0) {
        if(i==1) 
        sum = sum+i;
        else if(i==n/i)
        sum = sum + i;
        else 
        sum = sum + i + n/i;
        }
    }
    return sum;
}

int main(){
    int n = 12;
    int sum = getSum(n);
    if(sum > n) {
        cout<<"is an abundant Numner "<<"abundace with"<<sum-n<<endl;
    }
    else
    cout<<"is not an abundant Number"<<endl;
}