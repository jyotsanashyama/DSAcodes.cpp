#include <iostream>
using namespace std;

int countOccurence2(int a[], int n,int x, int i){
    if (i==n){
        return 0;
    }
    if (a[i]==x){
        return 1 + countOccurence2(a,n,x,i+1);
    }
    else{
        return countOccurence2(a,n,x,i+1);
    }

}

int main(){
int a[] = {5,5,6,5,6,7};
cout<<countOccurence2(a,6,5,0)<<endl;

return 0;
}
