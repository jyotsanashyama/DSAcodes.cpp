#include <iostream>
using namespace std;

int main(){

int a[100][100];
int row,column;
cin >> row >> column;

for(int i = 0; i < row ; i++){
    for(int j = 0; j < column; j++){
            cout << "Enter element of "<<i<<"th row: ";
        cin>> a[i][j];
    }
}

for(int i = 0; i<row ; i++){
    for(int j = 0; j< column ; j++){
         cout <<a[i][j] << " ";
    }
   cout << endl;
}

return 0;
}
