#include<iostream>
using namespace std;

int sum(int n){

    ///base case
    if (n==0){
        return 0;
    }

    ///recursive case
    int smallAns=sum(n/10);

    ///calculation
    int last_digit=n%10; ///for finding the last digit
    return smallAns + last_digit;

}

int main(){
    cout<<sum(12345)<<endl;
return 0;
}
