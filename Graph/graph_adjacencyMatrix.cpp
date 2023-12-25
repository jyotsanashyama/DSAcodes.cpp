#include<iostream>
#include<vector>
#include<queue>
using namespace std;

///BFS
void bfsPrint(vector<vector<int>> v, int start){
    int n=v.size();
    vector<bool> visited(n,false);
    queue<int> q;
    q.push(start);  ///pushing 1st ele in queue
    visited[start]=true;   ///making it trur

    while(!q.empty()){
        int cv=q.front();  ///current vertex
        q.pop();  ///poping after pushing
        cout<<cv<<endl;
        for(int i=0;i<n;i++){
            if(v[cv][i]==1 && visited[i]==false){
                q.push(i);
                visited[start]=true;
            }
        }
    }
}


///DFS
void dfsPrint(vector<vector<int>> v, int start, vector<bool> &visited){
    cout<<start<<endl;   ///1st print the starting  vertex then call recursion on its adjacent vertex
    visited[start]=true;
    int n=v.size();

    for(int i=0;i<n;i++){
        if(v[start][i]==1 && visited[i]==false){  ///if there is an edge and not visited yet, call recursion
            dfsPrint(v,i, visited);    ///calling recursion on its adjacent vertex
        }
    }
}

int main(){

int vertex,edge;
cin>>vertex>>edge;
vector<vector<int>> matrix(vertex,vector<int>(vertex,0));  ///initialising matrix with 0

for(int i=1;i<=edge;i++){
    int v1, v2;
    cin>>v1>>v2;
    matrix[v1][v2]=1;
    matrix[v2][v1]=1;
}

int start;
cout<<"Enter the starting vertex: ";
cin>>start;

vector<bool> visited(vertex,false);
cout<<"DFS:"<<endl;
dfsPrint(matrix, start, visited);
cout<<"BFS:"<<endl;
bfsPrint(matrix,0);
return 0;
}
