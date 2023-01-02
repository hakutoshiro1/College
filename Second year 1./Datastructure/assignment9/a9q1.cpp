#include<bits/stdc++.h>
using namespace std;
const int v=1e5+10;
vector <int> g[v];
vector <bool> visited(v,false);
vector <bool> visited1(v,false);
queue <int> traversal;
void dfs(int vertex)
{
    visited[vertex]=true;
    cout<<vertex<<" ";
    for(auto i:g[vertex])
    {
        if(visited[i])continue;
        dfs(i);
    }
}
int main ()
{
    int vertex,edges;
    cout<<"Enter number of vertices and Edges:";
    cin>>vertex>>edges;
    cout<<"Enter connected vertices with edge:"<<endl;
    for (int i = 0; i < edges; i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    cout<<"DFS:"<<endl;
    for (int  i = 1; i <= vertex; i++)
    {
        if(visited[i]) continue;
        dfs(i);
        cout<<endl;
    }
    cout<<"BFS:"<<endl;
    for(int i =1; i<=vertex;i++)
    {
        if(!visited1[i])
        {
            visited1[i]=true;
            traversal.push(i);
        }
        for(auto x:g[i])
        {
            if(visited1[x])continue;
            visited1[x]=true;
            traversal.push(x);
        }
    }
    while (!traversal.empty())
    {
        cout<<traversal.front()<<" ";
        traversal.pop();
    }
    return 0;
}