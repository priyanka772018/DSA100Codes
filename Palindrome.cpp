#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int rev=0, rem, temp;
    temp = n;
    while(n != 0) {
        rem = temp%10;
        rev = rev*10 + rem;
        temp = temp/10;
    };
    if(n == rev){
    cout<<n<<" "<<"is Palindrome"<<endl;
    }
    else {
    cout<<n<<" "<<"is not Palindrome"<<endl;
    }
    return 0;
}