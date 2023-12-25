#include <iostream>
using namespace std;

void selectionSort(int a[],int n){

        for (int i=0;i<n-2;i++){///find smallest element in RHS

            int smallest = i; ///it will contain the index of the smallest value

            for(int j=i+1;j<=n-1;j++){ ///value of j will start from next to the pointer element
                if (a[j]<a[smallest]){
                    smallest=j;  ///updating the index of smallest value
            }
        }///store the index of smallest value then swipe it with the pointer
         ///swapping if smallest element in RHS is smaller then the current element
            swap(a[i],a[smallest]);
    }
}
int main(){

    int n;  ///taking size of array
    cin>>n;

    int a[n]; ///making an array of total number of input 'n'
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    selectionSort(a,n);

    ///printing array
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

return 0;
}
