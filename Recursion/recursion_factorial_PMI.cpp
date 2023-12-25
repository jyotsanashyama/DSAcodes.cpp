#include<iostream>
using namespace std;

int fact(int n){
    ///1st step: base case
    if(n==0){
        return 1;
    }
    ///2nd step: induction hypothesis
    int smallAns=fact(n-1); ///assume we have already answer of smaller input i.e, n-1

    ///3rd step: use assumption to solve the problem (calculation)
    int ans=n*smallAns;
    return ans;

}

int main(){
cout<<fact(4)<<endl;
return 0;
}
