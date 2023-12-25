#include <iostream>
using namespace std;

int power(int x, int n){
    ///base case
    if(n==0){
        return 1;
    }
    ///recursive case
    int smallOut=power(x,n-1);

    ///calculation
    return x*smallOut; ///x^n = x * x^(n-1)
}

int main(){
    cout<<power(5,3);
return 0;
}
