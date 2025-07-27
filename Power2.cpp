#include<iostream>
using namespace std;
int power(int base, int exp) {
    if(exp>0){
        return (power(base, exp-1)*base);
    }
    else if(exp<0){
        return (power(base, exp+1)/base);
    }
    return 1;     
}
int main() {
    int base = 3;
    int exp = 4;
    cout<<power(base,exp);
    return 0;
}