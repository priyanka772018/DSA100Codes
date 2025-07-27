#include<iostream>
#include<math.h>
using namespace std;
void checkPerfectsquare(int n){
    if(ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        cout<<"true";
    }
    else{
        cout<<"False";
    }
}
int main() {
    int n = 49;
    checkPerfectsquare(n);
    return 0;
}