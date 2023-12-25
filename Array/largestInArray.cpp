#include<iostream>
using namespace std;

int main(){

cout << "Enter number of elements: "<<endl;
int n;
cin >> n;

int a[n];
for (int i=0; i<n; i++){
    cin >> a[i];
}

int largest_num = a[0];
for (int i=0; i<n; i++){
    if(largest_num < a[i]){
        largest_num = a[i];
    }

}

cout << "The largest element in the array is " << largest_num << endl;







return 0;
}
