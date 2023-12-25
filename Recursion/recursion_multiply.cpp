#include<iostream>
using namespace std;

int mul(int m, int n){

    ///base case
    if(n==0){
        return 0;
    }
    ///recursive
    int smallAns=mul(m,n-1); ///m*(n-1)

    ///calculation
    return smallAns + m;

}

int main(){
    cout<<mul(3,5);
return 0;
}
