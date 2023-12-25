#include <iostream>
using namespace std;

bool sorted(int a[], int n){   ///here n is the size of array

    ///base case
    if(n==0 || n==1){  /// here || means or
        return false;
    }
    if(a[0] > a[1]){
        return true;
    }

    ///calling recursion on small part
    bool smallSorted = sorted(a+1, n-1);
    if(smallSorted){
        return false;  ///if small array is sorted return false
    }
    else{
        return true;  ///if smaller array is not sorted how can the whole array is sorted, so return false
    }

}
///It will check if last two elements are sorted or not and then the recursion will start on left side elements
bool sorted2(int a[],int n){   ///this will start the code from last

    if (n==0 || n==1){
        return true;
    }
    if(a[n-2] > a[n-1]){
        return false;
    }
    return sorted2(a,n-1);


}

int main(){
    int a[5];
    a[5]=(1,2,3,4,5);
    if (sorted2(a,5)){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
return 0;
}
