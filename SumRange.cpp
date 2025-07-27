#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int y = 32;
    int sum = 0;
    for(int i=x; i<=y; i++) {
          sum = sum+i;
    }
    cout<<sum<<endl;
}


// sum = y*(y+1)/2 - x*(x+1)/2 + x 
