#include<iostream>
using namespace std;
/// 1 + 1/2 + 1/2^2 +...+ 1/2^k
double gsum(int k){
    ///base case
    if(k==0){
        return 1;  ///   1/2^0 = 1
    }
    ///recursive case
    double smallAns=gsum(k-1);

    ///calculation
    return smallAns + 1.0/pow(2,k);
}

int main(){
    cout<<gsum(3);
return 0;
}
