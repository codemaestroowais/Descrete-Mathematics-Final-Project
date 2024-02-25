#include<iostream>
using namespace std;
void degreeCalculate(int numedges) ; 
const int index=1000; 
int main()
{
    cout<<"Enroll the edges: ";
    int numedges;
    cin>>numedges;
    degreeCalculate(numedges);
}
void degreeCalculate(int numedges) 
{
    cout<<"Enroll the pair of vertex:"<<endl;
    int degree[index]={0};
    for(int i=0; i<numedges; i++)
    {
        int u;
        int v;
        cin>>u;
        cin>>v;
        degree[u]++;
        degree[v]++;
    }
    cout<<"Degrees of Vertex:"<<endl; 
    for(int i=0; i<index; i++)  
    {
        if(degree[i]>0)  
        {
            cout<<"Vertex "<<i<<": "<<degree[i]<<" degree."<<endl;    
        }  
    }
}  