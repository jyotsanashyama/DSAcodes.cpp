#include <iostream>
#include <vector>
using namespace std;

int main(){

    ///creating vector

    vector <int> *vp= new vector <int>(); ///dynamic: we have to delete it by ourself
    vector <int> v;  ///static
     ///write the type whatever you want to store


    ///inserting elements in vector
    v.push_back(10);
    v.push_back(20); ///will push the elements in the last of present element
    v.push_back(30);

    ///changing the element
    v[2]=100;

    ///accessing elements from vector
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;

    /// push_back : check the current size of the vector...double the size if get filled
    ///never use [] to insert elements in vector...output will be garbage

    cout<<v.at(1)<<endl;
    cout<<v.at(5)<<endl; ///will throw error after checking the index... using at function is much safer as it checks the index


    ///iterate over a vector
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    //pop out or remove the last element
    v.pop_back();

    ///capacity will give the current capacity of vector i.e; how many elements we can store in that vector
    ///size will give how many elements are present

    ///creating vector of given size
    vector<int> v1(10);

    vector<int> v2(10,2); ///will create a vector of size 10 and insert 2 at each element

    sort(v2.begin(),v2.end()); ///to sort a vector

return 0;
}
