#include<iostream>
#include<math.h>
using namespace std;
int getDivisorSum(int num) {

    int sum = 0;
    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            if(i == i){
                sum = sum + i;
            }
            else if(i == num/i){
                 sum = sum + i ;
            }
            else{
                sum = sum + i + num/i; 
            }
        }
        return sum;
    }
}
int main() {
    int num1 = 30, num2 = 140;
    int sum1 = getDivisorSum(num1);
    int sum2 = getDivisorSum(num2);

    if(sum1/num1 == sum2/num2)
    cout<<"friendly pairs"<<endl;
    else
    cout<<"Not a friendly pairs"<<endl;
      
}