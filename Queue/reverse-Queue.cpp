#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverse(queue <int> &q){
    stack <int> s;
    while(!q.empty()){
        q.push(q.front());   ///pushing the elements from queue to stack
        q.pop();
    }
    ///now queue is empty and stack is full
    while(!s.empty()){
        q.push(s.top()); ///pushing back the elements from stack to queue
        s.pop();
    }
}

/*when elements are pushed in stack, it is pushed in reverse order...
the front element become the bottom element of stack
When we access the elements back from stack and push it inside the queue...
it get pushed in reverse order and hence, the queue gets reversed.
*/
int main(){

queue <int> q;
for(int i=0;i<5;i++){
    q.push(i);
}

reverse(q);

while(!q.empty()){
    cout<<q.front()<<" ";   ///printing the reversed queue
    q.pop();
}

return 0;
}
