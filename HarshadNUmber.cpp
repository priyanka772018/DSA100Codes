#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum=0,temp,digit;
    temp = n;
    while(temp != 0){
    digit = temp%10;
    sum = sum + digit;
    temp = temp/10;
    }
    if(n%sum == 0 )
    cout<<"number"<<n<<"is harshad";
    else
    cout<<"number"<<n<<"is not harshad";
    return 0;
    
}