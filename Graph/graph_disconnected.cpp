#include<iostream>
#include<vector>
using namespace std;

void dfsPrint(vector<vector<int>> v, int start, vector<bool> visited){
    cout<<start<<endl;
    visited[start]=true;
    int n=v.size();

    for(int i=0;i<n;i++){
        if(v[start][i]==1 && visited[i]==false){
            dfsPrint(v,i, visited);
        }
    }
}

void disconnected_dfs(vector<vector<int>> matrix){
    int n=matrix.size();
    vector<bool> visited(n,false);

    ///if vertex not visited, call dfsPrint with that vertex
    for(int i=0;i<n;i++){
        if(!visited[i]){
            dfsPrint(matrix,i,visited);
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


cout<<"DFS:"<<endl;
disconnected_dfs(matrix);
return 0;
}
