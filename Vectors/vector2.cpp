#include <iostream>
#include<vector>
using namespace std;

int main(){

vector <int> v;
///pushing 100 elements in a vector
for (int i=0 ; i<100;i++){
    v.push_back(i+1);
    cout<<"Size of the vector: "<<v.size()<<endl;
    cout<<"Capacity :"<<v.capacity()<<endl; ///will get double after the current vector gets filled

    ///capacity will give the current capacity of vector i.e; how many elements we can store in that vector
    ///size will give how many elements are present


}
///printing those 100 elements
for (int i=0; i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
