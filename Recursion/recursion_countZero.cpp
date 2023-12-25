#include<iostream>
using namespace std;

/// count the total number of zero present in a number
/// find number of zero in smaller output and add it
///check the last digit and return in accordance
///n >= 1
int countZero(int n){
    ///base case
    if(n==0){
        return 0;
    }
    ///recursive case
    int smallAns=countZero(n/10); ///take the smaller part...remove the last digit

    ///calculation
    int last_digit = n%10;
    if(last_digit==0){
        return 1+smallAns;
    }
    else{
        return smallAns;
    }


}

int main(){
    cout<<countZero(10320);
return 0;
}
