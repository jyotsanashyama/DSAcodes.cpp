#include <iostream>
using namespace std;

template<typename T>
class Stack{
    T *arr;
    int nextIndex;
    int capacity;

public:
    Stack(){
        capacity=4;
        arr=new T(capacity); ///creating dynamic array
        nextIndex=0;
    }
    Stack(int cap){
        capacity=cap;
        arr = new int(capacity); ///cap-> capacity
        nextIndex=0;
    }

    ///return no. of elements present in stack
    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        /*if(nextIndex==0){
        return true;
        }else{
        return false;
        */
        return nextIndex==0;
    }

    ///push the elements in stack
    void push(T ele){
        if(nextIndex==capacity){
            T *newArr = new T[2*capacity];  ///creating a new array of twice the size of previous array
            for(int i=0; i<capacity;i++){
                newArr[i]=arr[i];   ///inserting all data from prev arr to new arr
            }
            delete []arr;   ///deleting prev arr
            arr = newArr;   ///pointing towards new arr
            capacity=2*capacity;   ///updating the value of capacity
        }
        arr[nextIndex]=ele;
        nextIndex++;
    }

    ///delete element from stack-pop
    void pop(){
        if(isEmpty()){  ///if stack get empty we can't delete more elements
            cout<<"Stack empty"<<endl;
            return;
        }
        nextIndex--;
    }

    ///Access elements from top
    T top(){
        if(isEmpty()){  ///if stack get empty we can't delete more elements
            cout<<"Stack empty"<<endl;
            return -1;
        }
        return arr[nextIndex-1];
    }
};

int main(){

Stack<char> s;  /// will convert the all inputs into ASCII values
s.push(100);
s.push(101);
s.push(102);
s.push(103);
s.push(104);

cout<<s.top()<<endl;
s.pop();

cout<<s.top()<<endl;
s.pop();

cout<<s.top()<<endl;
s.pop();

cout<<s.size()<<endl;

cout<<s.isEmpty()<<endl;


return 0;
}

