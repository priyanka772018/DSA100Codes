#include<bits/stdc++.h>
using namespace std;
int fac(int num){
    if(num==0){
        return 1;
    }
    int ans = num*fac(num-1);
    return ans;
}
int detectStrong(int num) {
    int digit,sum=0;
    int temp = num;
    digit = num%10;
    sum = sum + fac(digit);
    if(sum==num)
    return num;
}
int main() {
    int num=145;
    if(detectStrong(num))
    cout<<"Number is strong";
    else
    cout<<"number is not strong";
    return 0;
}