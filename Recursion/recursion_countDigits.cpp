#include <iostream>
using namespace std;

///count the number of digits in the given number
///split the last number and return the length of rest number and at last add 1

int count(int n){

    ///base case
    if (n==0){
        return 0;
    }

    ///recursive case
    int smallAns=count(n/10); ///n/10 = 789 -> n/10 -> 78 -> 7 ...total recursion: count= 3 ....final ans = 3+1 = 4

    ///calculation
    return smallAns + 1;

}
int main(){
    cout<<count(7890)<<endl;
return 0;
}
