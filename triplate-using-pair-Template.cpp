#include <iostream>
using namespace std;

///craete triplate using pair

template <typename T, typename V>

class Pair{
    T x;
    V y;

public:
    void setX(T x){
        this->x=x;
    }
    T getX(){
        return x;
    }
    void setY(V y){
        this->y=y;
    }
    V getY(){
        return y;
    }
};

int main(){

Pair <Pair<int,int>, int> p;  ///1st level of nesting
p.setY(30);
Pair<int, int> temp;
temp.setX(10);
temp.setY(20);

p.setX(temp);

cout<<p.getX().getX()<<" "<<p.getX().getY()<<" "<<p.getY()<<endl;

return 0;
}

