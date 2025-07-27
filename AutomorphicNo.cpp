#include<iostream>
using namespace std;
int isAutomorphic(int n){
    int square = n*n;
    while(n != 0)
    {
        if(n%10 != square%10) {
            return 0;
        }

        n /= 10;
        square /= 10;
    }
    return 1;
}
int main() {
    int n = 376, sq = n*n;
    if(isAutomorphic(n))
    cout<<"Num"<<n<<"is automorphic";
    else
    cout<<"Num"<<n<<"is not automorphic";
    return 0;
}