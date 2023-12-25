
#include <iostream>
using namespace std;

///in 1st iteration, 1st largest value got its position, in 2nd iteration 2nd largest value got its position and so on
///it will take n steps if array is already sorted
void bubblesort(int a[], int n){

    for(int count=1;count<=n-1;count++){

       int flag=0;  ///if input array is already sorted the if condition will always false
        for (int j=0; j<n-2;j++){
            if (a[j]> a[j+1]){
                swap(a[j],a[j+1])  ///hence this condition will never run            }
                flag=1;  ///the value of flag will become 1 if the array is not sorted
        }
        if (flag==0){  ///checking if the flag value is still 0 or not
            break   ///it will still 0 if the array is sorted and then the condition will get break
        }    ///break statement will break the outer loop
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
