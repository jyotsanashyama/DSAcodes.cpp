#include <iostream>
using namespace std;

///iterate using index i and after finding it return the value

int firstIndex(int a[], int n, int x, int i){
    if(i==n){
        return -1; ///this means value not found
    }
    if (a[i]==x){
        return i;
    }
    return firstIndex(a, n, x, i+1); ///for moving ahead...similar to i++

}

int main(){

int a[]= {1,4,3,4,5};
cout<<firstIndex(a,5,4,0);
return 0;
}
