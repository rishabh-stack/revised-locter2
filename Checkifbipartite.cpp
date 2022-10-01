#include<bits/stdc++.h>
using namespace std;
bool isBipartite(int v, vector<int> adj[])
{
    vector<int> col(v,-1);
    queue<pair<int,int> > q ;   
    for (int i = 0; i < v; i++)
    {
        if (col[i]==-1)
        {
            q.push({i,0});
            col[i]=0;

            while (!q.empty())
            {
                pair<int, int> p= q.front();
                q.pop();

                int v=p.first, c = p.second ;
                for( int j : adj[v])
                {
                    if (col[j]==c)
                    {
                        return 0;
                    }
                    if (col[j]==-1)
                    {
                        col[j]= (c)?0:1 ;
                        q.push( { j,col[j] } );
                    }
                }
            }
        }
    }
    return 1 ;
}
int main()
{
     int v,e ;
     v=4 ;
     e= 8;
     vector<int> adj[v];
     adj[0]={1,3};
     adj[1]={0,2};
     adj[2]={1,3};
     adj[3]={0,2};
    bool ans = isBipartite(v, adj);

      if (ans)
        cout << "Yes\n";
  
      else
        cout << "No\n";
 
    return 0;

}