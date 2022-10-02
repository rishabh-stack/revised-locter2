#include<bits/stdc++.h>
using namespace std;
struct queuentry
{
    int v ;
    int dist ;
};
int getmindicethrows(int move[],int n )
{
    bool *visited= new bool[n] ;
    for (int i = 0; i < n; i++)
    {
        visited[i]= false ;
    }
    queue<queuentry> q ;
    visited[0]=true ;
    queuentry s={0 , 0 };
    q.push(s);
    queuentry qe ;
    while (!q.empty())
    {
        qe= q.front();
        int v= qe.v;
        if (v==n-1)
        {
            break;
        }
        q.pop();
        for (int i = v+1; ( i <=v+6 )&& i<n ; i++)
        {
            if (!visited[i])
            {
                queuentry a;
                a.dist= qe.dist+1;
                visited[i]=true ;

                if (move[i]!=-1)
                {
                    a.v= move[i];
                }
                else
                {
                    a.v= i ;
                }
                q.push(a);
            }
        }
    }
    return qe.dist;
}
int main()
{
      int N = 30;
    int moves[N];
    for (int i = 0; i<N; i++)
        moves[i] = -1;
 
    // Ladders
    moves[2] = 21;
    moves[4] = 7;
    moves[10] = 25;
    moves[19] = 28;
 
    // Snakes
    moves[26] = 0;
    moves[20] = 8;
    moves[16] = 3;
    moves[18] = 6;
    cout << "Min Dice throws required is " << getmindicethrows(moves, N);
    return 0;

}