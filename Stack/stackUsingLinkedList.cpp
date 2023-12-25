#include <iostream>
using namespace std;

template <typename T>

class Node{
    public:
        T data;
        Node<T> *next;
        Node(T data){
            this->data=data;
            next=NULL;
        }
};

template <typename T>
class Stack{
    Node<T> *head;
    int size;

    public:
        Stack(){
            head=NULL;
            size=0;
        }

        int getSize(){
            return size;
        }

        bool isEmpty(){
            return size==0;
        }

        void push(T ele){  ///push the element at the head as it will be easier to acecss and delete head and move it to next
            Node<T> *n = new Node<T>(ele);
            n->next=head;
            head=n;
            size++;
        }

        void pop(){
            if(isEmpty()){
                cout<<"Stack empty"<<endl;
                return;
            }
            Node<T> *temp = head;
            head=head->next;
            temp->next=NULL;
            delete temp;
            size--;
        }

        T top(){
            if(isEmpty()){
                cout<<"Stack empty"<<endl;
                return 0;
            }
            return head->data;
        }

};


int main(){

Stack<int> s;

s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);

cout<<s.top()<<endl;
s.pop();

cout<<s.top()<<endl;
s.pop();

cout<<s.top()<<endl;
s.pop();

cout<<s.getSize()<<endl;

cout<<s.isEmpty()<<endl;


return 0;
}
