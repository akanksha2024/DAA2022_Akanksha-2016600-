#include <iostream>
#include <queue>
using namespace std;
#define V 5
#define E 5
bool Bipartite(int G[V][E], int s) {
   int colorA[V];
   for (int i = 0; i < V; ++i)
   colorA[i] = -1;
   colorA[s] = 1; //Assign a color to the source vertex
   queue <int> q; //Create a queue of vertex numbers and enqueue source vertex for BFS traversal
   q.push(s);
   while (!q.empty()) {
      int w = q.front(); //dequeue a vertex
      q.pop();
      for (int v = 0; v < V; ++v) //Find all non-colored adjacent vertices 
      {   if (G[w][v] && colorA[v] == -1) //An edge from w to v exists and destination v is not colore 
          {  colorA[v] = 1 - colorA[w]; //Assign alternate color to this adjacent v of w
            q.push(v);
         } else if (G[w][v] && colorA[v] == colorA[w]) //An edge from w to v exists and destination
            //v is colored with same color as u
            return false;
      }
   }
   return true; //if all adjacent vertices can be colored with alternate color
}
int main() {
   int v;
   cin>>v;
   
   int graph[V][E];
   for(int i=0;i<V;i++)
   { for(int j=0;j<E;j++)
     cin>>graph[i][j];
   }
   if (Bipartite(graph, 0))
      cout << "Yes Bipartite"<<endl;
   else
      cout << "Not Bipartite"<<endl;
   return 0;
}
