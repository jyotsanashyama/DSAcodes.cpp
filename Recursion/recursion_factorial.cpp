#include<iostream>
using namespace std;

int fact(int n){
    if (n<0) return -1; ///as factorial of negative does not exist
    if (n==0) return 1; ///because factorial of 0 is 1...so as n=0 recursion will stop...if we don't add this line, infinite loop will start
    int smallAns=fact(n-1);
    return n*smallAns;  ///fact value get store in smallAns and get multiply by n increases

}
///call stack : a bottom we have main function which is calling the func with enetred value of n and runs with dec in value of n

int main(){

int n;
cin>>n;

int ans=fact(n);
cout<<ans<<endl;

return 0;
}
