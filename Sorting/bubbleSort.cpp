#include <iostream>
using namespace std;

///in 1st iteration, 1st largest value got its position, in 2nd iteration 2nd largest value got its position and so on
///it will take n^2 steps
void bubblesort(int a[], int n){

    for(int count=0;count<=n-1;count++){
        for (int j=0; j<n-1;j++){   ////here using j+1 for comparision thats'why max value of j will go till to n-2 only otherwise if n-1 is taken, j+1 will become n at j=n-1....this is the reason
            if (a[j]> a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }

}

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    bubblesort(a,n); ///a=array, n= size of array

    for (int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
return 0;
}
