#include <iostream>
using namespace std;

class DynamicArray{
    int *data;
    int nextIndex;
    int capacity; ///total size of array
public:
    DynamicArray(){ ///constructor
        data = new int[5]; ///initializing dynamic array
        nextIndex=0;
        capacity=5;
    }
    void add(int element){
    if (nextIndex==capacity){ ///creating a new array of double size
        int *newData = new int[2*capacity];
        for (int i=0; i<capacity;i++){
            newData[i]=data[i];
        }
        delete []data; ///deleting the old array that get stored in heap memory... memory Leak
        data = newData; ///data is now pointing the new data
        capacity = capacity*2;
    }
    data[nextIndex]=element;  ///inserting the new elments
    nextIndex++; ///increment of indexes
    }

    void add(int element, int i){ ///user can insert element at index i
        if (i<nextIndex){
            data[i]=element;
        }
        else if(i==nextIndex){
            add(element);///calling the add function to increase the size of the array
        }
        else{
            cout<<"Index is not valid"<<endl;
        }
    }


    int get(int i){
        if (i>=0 && i<nextIndex){
            return data[i];
        }
        else{
            return -1;  ///return -1 if index is not valid
        }
    }

    void print(){
        for (int i=0;i<nextIndex;i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }

    int getCapacity(){
        return capacity; ///it will return the capacity of the array
    }
};

int main(){

    DynamicArray d1; ///our default constructor is called
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);

    d1.print();
   cout<< d1.getCapacity()<<endl;

    DynamicArray d2(d1); ///inbuilt copy constructor called
    d1.add(100,0); //writing element then index
    d1.print();
    d2.print();



return 0;
}
