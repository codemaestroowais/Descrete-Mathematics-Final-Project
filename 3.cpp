#include <iostream>
using namespace std;
const int index=100;
bool Bipartite(int numedges) ;
int main()
{
    int numedges;
    cout<<"Enroll the edges: ";
    cin>>numedges;
    cout<<"Enroll the pair of vertex:"<<endl;
    if(Bipartite(numedges))
    {
        cout<<"Yes, the graph is bipartite."<<endl;
    }
    else
    {
        cout<<"The graph is not bipartite."<<endl;
    }
}
bool Bipartite(int numedges) 
{
    int adjMatrix[index][index]={0}; 
    int colors[index]={0};
    for(int i=0; i<numedges; i++) 
    {
        int u;
        int v; 
        cin>>u;
        cin>>v; 
        adjMatrix[u][v]=1;
        adjMatrix[v][u]=1;
    }
    for(int i=0; i<index; i++)
    {
        if (colors[i]==0)
        {
            colors[i]=1;
            for(int j=0; j<index; j++)
            {
                if(adjMatrix[i][j]==1)
                {
                    if(colors[j]==0) 
                    {
                        colors[j]=3-colors[i];
                    }
                    else if(colors[j]==colors[i])
                    {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}