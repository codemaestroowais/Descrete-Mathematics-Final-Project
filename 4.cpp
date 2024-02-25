#include<iostream>
using namespace std;
const int index=10;
void adjacencyMatrixConstruct(int numedges, bool directed) ;
int main() 
{
    int numedges;  
    cout<<"Enroll the edges: ";  
    cin>>numedges;
    bool directed;
    cout<<"Is the graph directed? (1 for yes, 0 for no): ";
    cin>>directed;   
    cout<<"Enroll the pair of vertex:" << endl;
    adjacencyMatrixConstruct(numedges, directed);
}
void adjacencyMatrixConstruct(int numedges, bool directed) 
{   
    int adjMatrix[index][index]={0};
    for (int i=0; i<numedges; i++) 
    {
        int u;
        int v;
        cin>>u;
        cin>>v;
        if(directed)  
        {
            adjMatrix[u][v]++;   
        }  
        else 
        {  
            adjMatrix[u][v]++;  
            adjMatrix[v][u]++;  
        }  
    }
    cout<<"Matrix Adjacency:"<<endl;   
    for (int i=0; i<index; i++)
    {
        for (int j=0; j<index; j++) 
        {
            cout<<adjMatrix[i][j]<<" "; 
        }
        cout<<endl; 
    }
}