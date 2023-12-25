#include <iostream>
using namespace std;

template <typename T>
class Queue{
    T *arr;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    Queue(){ ///default constructor
        capacity=5;
        arr = new T[capacity];
        nextIndex=0;
        firstIndex=-1;
        size=0;
    }

    Queue(int cap){ ///paarmeterised constructor
        capacity = cap;
        arr = new T[capacity];
        nextIndex=0;
        firstIndex=-1;
        size=0;
    }

    ///function for queue
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }

    ///insert elements
    void push(T ele){
        if(size==capacity){
            cout<<"Queue full"<<endl;
            return;
        }
        arr[nextIndex] = ele;
        nextIndex = (nextIndex+1)%capacity;  ///circular array
        if(firstIndex== -1){
            firstIndex = 0;
        }
        size++;
    }

    ///access elements
    T front(){
        if(isEmpty()){
            cout<<"Queue empty"<<endl;
            return 0;
        }
        return arr[firstIndex];
    }

    ///delete elements
    void pop(){
        if(isEmpty()){
            cout<<"Queue empty"<<endl;
            return;
        }
        firstIndex = (firstIndex + 1) % capacity;  ///firstIndex will change acc to circular array
        size--;  ///after removing elements, size will decrease

        if(size==0){  ///optional
            ///reset
            nextIndex = 0;
            firstIndex = -1;
        }
    }

};

int main(){

Queue <int> q(5);
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.push(60);
q.push(70);

cout<<q.front()<<endl;

q.pop();
q.pop();
q.pop();

cout<<q.front()<<endl;

cout<<q.getSize()<<endl;

cout<<q.isEmpty()<<endl;

q.push(60);
q.push(70);

q.pop();
q.pop();

cout<<q.front()<<endl;

cout<<q.getSize()<<endl;

return 0;
}
