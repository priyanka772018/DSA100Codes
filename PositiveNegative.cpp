#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    if(num<0) {
        cout<<"Negative"<<endl;
    }
   else if(num>0) {
    cout<<"Positive"<<endl;
   }
   else{
    cout<<"Zero"<<endl;
   }
   return 0;
}
