#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int reverse=0, rem;
    while( n!=0) {
        rem = n%10;
        reverse = reverse*10 + rem;
        n = n/10;
    }
    cout<<"Reverse Number is"<<" "<<reverse<<endl;
    return 0;

}