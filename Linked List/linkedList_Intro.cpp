#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int data){ //parametrised constructor
        this->data=data;
        next=NULL;
    }
};

int main(){
    //static
    Node n1(1);
    Node n2(2);

    //in order to create a relation between nodes
    n1.next=&n2; //it stores the memory address of the next node

    cout<<n1.data<<" "<<n2.data<<endl;

    Node *head=&n1; //contains address of 1st node

    cout<<head->data<<endl; //prints value of 1st node


    //dynamically--memory store in stack(8 bytes) and heap
    Node *n3=new Node(n3);
    Node *n4=new Node(n4);
    n3->next=n4; //to connect both n3 and n4




return 0;
}
