#include<iostream>
using namespace std;
const int index=1000;
void degreeCalculate(int numedges);
int main()
{
    int numedges;
    cout<<"Enroll the edges: ";
    cin>>numedges;
    cout<<"Enter the pair of vertex:"<<endl;
    degreeCalculate(numedges);
}
void degreeCalculate(int numedges)
{
    int inDegree[index]={0};
    int outDegree[index]={0};
    for(int i=0; i<numedges; i++)
    {
        int u;
        int v;
        cin>>u;
        cin>>v;
        outDegree[u]++;
        inDegree[v]++;
    }
    cout<<"Enroll the vertex In-Degrees and Out-Degrees:"<<endl;
    for(int i=0; i<index; i++)
    {
        if(inDegree[i]>0 || outDegree[i]>0)
        {
            cout<<"Vertex "<<i<<": In-Degree="<<inDegree[i]<<", Out-Degree="<<outDegree[i]<<endl;
        }
    }
}