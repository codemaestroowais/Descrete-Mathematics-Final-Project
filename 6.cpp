#include <iostream>
using namespace std;
const int verticesindex = 100;
const int edgesindex = 100 ;
void createMatrix(int vertices, int edges, int edgeList[][2], int edgeFrequency[]);
int main()
{
    int vertices;
    int edges;
    cout<<"Enroll the vertices: ";
    cin>>vertices;
    cout<<"Enroll the edges: ";
    cin>>edges;
    int edgeList[edgesindex][2];
    int edgeFrequency[edgesindex];
    cout<<"Enter the vertex pairs and frequency of each edge:"<<endl;
    for(int i=0; i<edges; i++)
    {
        cin>>edgeList[i][0];
        cin>>edgeList[i][1];
        cin>>edgeFrequency[i];
    }
    createMatrix(vertices, edges, edgeList, edgeFrequency);
}
void createMatrix(int vertices, int edges, int edgeList[][2], int edgeFrequency[]) 
{
    int incidenceMatrix[verticesindex][edgesindex]={0};
    for (int i=0; i<edges; i++)
    {
        int vertex1=edgeList[i][0];
        int vertex2=edgeList[i][1]; 
        incidenceMatrix[vertex1][i]=edgeFrequency[i];
        incidenceMatrix[vertex2][i]=edgeFrequency[i];
    }
    cout<<"Incidence Matrix: "<<endl;
    for(int i=0; i<vertices; i++)
    {
        for(int j=0; j<edges; j++)
        {
            cout<<incidenceMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}