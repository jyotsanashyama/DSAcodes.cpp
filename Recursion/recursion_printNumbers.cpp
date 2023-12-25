#include <iostream>
using namespace std;
///print number from 1 to n
///return type is void becausewe are not returning anything

///ascending order
void print(int n){
    ///base case
    if(n==0){
        return ;  ///this line is very important otherwise code will go to negative numbers and then infinite
    }
    ///recursive case
    print(n-1);   ///print from 1 to n-1

    ///calculation
    cout<<n<<endl;  ///lastly printing n
}

///descending order

void print2(int n){
    ///base case
    if(n==0){
        return ;
    }

     cout<<n<<endl; ///first print n

    ///recursive case
    print2(n-1);   ///then print numbers n-1 for getting ascending order
    ///n-1, n-2,...,2, 1

}

int main(){
    print(5);
    print(5);

return 0;
}
