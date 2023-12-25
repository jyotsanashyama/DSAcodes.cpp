#include <iostream>
using namespace std;

int sumOfArray(int a[], int n){
    ///base case
    if(n==0){
        return 0;
    }
return a[0] + sumOfArray(a+1, n-1); /// recursion will give the sum of elements except a[0] and then we will add a[0]
}


int sumOfArray2(int a[], int n){  ///starting the same process from end
    if (n==0){
        return 0;
    }
    return a[n-1] +sumOfArray2(a, n-1);

}

int main(){
    int a[]={1,2,3,4,5};
    cout<<sumOfArray(a, 5)<<endl;
    cout<<sumOfArray2(a, 5)<<endl;

return 0;
}
