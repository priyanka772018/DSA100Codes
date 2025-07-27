#include<iostream>
#include<math.h>
using namespace std;
int order(int x){
    int len = 0;
    while(x){
        len++;
        x = x/10;
    }
    return len; 
}

bool armstrong(int num, int len) {
    int sum = 0, temp, digit;
    temp = num;
    while(temp != 0){
        digit = temp%10;
        sum = sum + pow(digit,len);
        temp /= 10;
    };
    return num = sum;
}

int main() {
    int num = 370, len;
    len = order(num);
    if(armstrong(num,len))
    cout<<num<<"is armstrong";
    else
    cout<<num<<"is not armstrong";
    return 0;
}