#include <iostream>
using namespace std;

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

/*Pair <int> p1;
p1.setX(1);
p1.setY(2);
cout<<p1.getX()<<" "<<p1.getY()<<endl;

Pair <double> p2;
p2.setX(1.73);
p2.setY(2.21);
cout<<p2.getX()<<" "<<p2.getY()<<endl;
*/

Pair <int, double> p1;
p1.setX(1.73);   ///typecasting will take place and will convert double into int
p1.setY(1.73);

cout<<p1.getX()<<" "<<p1.getY()<<endl;


return 0;
}
