#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    //parametrised constructor
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

 //for printing linked list, creating a function
//if address of 1st node is known, the entire ll is known
void print(Node *head){
    //Node *temp=head;---if we use temp variable instead of head directly, it will not change the value of head and then we can print the ll more than once
    //replace head with temp in loop

    while(head!=NULL){
        cout<<head->data<<" "; //here data get printed
        head=head->next; //moving forward
    }

    //if we write the whole while loop again,
    //it will not print ll twice as it already have head as NULL, so loop will not run
}


int main(){
    //static
    Node n1(1);
    Node *head=&n1;

    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    //to make the connection between each node, store the address like this
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;

    print(head);

return 0;
}
