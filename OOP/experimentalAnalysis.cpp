#include<iostream>
#include <sys/time.h>
using namespace std;

long getTimeInMicroSeconds(){
    struct timeval currentTime;
    gettimeofday(&currentTime, NULL);
    return currentTime.tv_sec*(int)1e6 + currentTime.tv_usec;
}

void mergeArrays(int x[], int y[], int a[], int s, int e){
    int mid = (s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    while (i<=mid && j<=e){
        if (x[i]<y[j]){
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
}

int main(){

for(int n=10;n<=10000000;n*=10){
    int *arr=new int [n];
    long startTime, endTime;
    for(int i=0;i<n;i++){
        arr[i]=n-i;
    }
    startTime = getTimeInMicroSeconds();

    mergeSort(arr,0,n-1);

    endTime = getTimeInMicroSeconds();

    cout<<"Merge Sort n = "<<n<<"time= "<<endTime-startTime<<endl;
    delete []arr;
}

return 0;
}
