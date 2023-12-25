#include <iostream>
using namespace std;

void printAllPos(int a[], int n,int x, int i){
    if (i==n){
        return ;
    }
    if (a[i]==x){
        cout<<i<<" ";
    }
    printAllPos(a,n,x,i+1); ///recursion will run up to last of array and will print all the index that satisfy the condition

}

int main(){
int a[]= {5,5,6,5,6,7};
printAllPos(a,6,5,0);
return 0;
}
