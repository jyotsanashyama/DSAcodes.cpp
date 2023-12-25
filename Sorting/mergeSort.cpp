#include <iostream>
using namespace std;

///for merging sorted arrays
void mergeArrays(int x[], int y[],int a[], int s, int e){ ///compare the indexes of both the arrays
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;

    while (i<=mid && j<=e){
        if(x[i]<y[j]){
            a[k]=x[i];
            i++;
            k++;
        }
        else{
            a[k]=y[j];
            j++;
            k++;
        }
    }
    while(i<=mid){ ///copy rest of the elements after comparision
        a[k]=x[i];
        k++;
        i++;
    }
    while(j<=e){ ///copy rest of the elements after comparision for j
        a[k]=y[j];
        k++;
        j++;
    }
}

void mergeSort(int a[], int s, int e){
    ///base case: length 0 or 1
    if(s>=e){
        return;
    }
    ///method 1

    int mid = (s+e)/2; ///for finding the mid
    int x[100], y[100];
    for(int i=0; i<=mid; i++){ ///consider the half array as another array
        x[i]=a[i];
    }
    ///the other half will have the same index and will start from mid+1 index
    for(int i=mid+1; i<=e; i++){
        y[i]=a[i];
    }

    mergeSort(x,s,mid);
    mergeSort(y, mid+1, e);

    mergeArrays(x,y,a,s,e);
}

int main(){
    int a[]={4,3,2,-5,6,2};
    mergeSort(a,0,5);

    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }

return 0;
}
