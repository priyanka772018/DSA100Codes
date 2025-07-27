//winding unwinding
#include<iostream>
using namespace std;
int  Len(char* str){
    if(*str == '\0')
    return 0;
    else
    return 1+Len(str + 1);
}
int main() {
    char str[]  = "Priyanka";
    cout<<Len(str);
    return 0;
}