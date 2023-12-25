#include<iostream>
using namespace std;
///1st two fibonacci no is fixed: 0 and 1
int fib(int n){
        ///base case: smallest problem whose ans is already known
        ///here two base cases is required as fibonacci have two fixed numbers 0 and 1
        if(n==0){
            return 0;
        }
        if (n==1){
            return 1;
        }
        ///recursive code
        int smallOut1=fib(n-1);
        int smallOut2=fib(n-2);

        ///calculation
        return smallOut1+smallOut2;

}

int main(){
    cout<<fib(3)<<endl;
return 0;
}
