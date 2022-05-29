#include <bits/stdc++.h>
using namespace std;
#define V 5

 //minimum distance from vertex
int minDistance(int dist[], bool sptSet[])
{
    // Initialize min value
    int min = INT_MAX, min_index;
    for (int i = 0; i < V; i++)
        if (sptSet[i] == false && dist[i] <= min)
            min = dist[i], min_index = i;
    return min_index;
}
 
// Function to print shortest path from source to j using
// parent array
void printPath(int parent[], int j)
{
    // Base Case : If j is source
    if (parent[j] == -1)
        return;
    printPath(parent, parent[j]);
    cout << j << " ";
}
 
// A utility function to print the constructed distance
// array
void printSolution(int dist[], int n, int parent[])
{
    int src = 0;
    cout << "Vertex\t Distance\tPath";
    for (int i = 1; i < V; i++) {
        printf("\n%d -> %d \t\t %d\t\t%d ", src, i, dist[i],
               src);
        printPath(parent, i);
    }
}
void dijkstra(int graph[V][V], int src)
{
    int dist[V];
    bool sptSet[V] = { false };
    int parent[V] = { -1 };
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX;
    dist[src] = 0;
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;
        for (int v = 0; v < V; v++)
            if (!sptSet[v] && graph[u][v]
                && dist[u] + graph[u][v] < dist[v]) {
                parent[v] = u;
                dist[v] = dist[u] + graph[u][v];
            }
    }
    printSolution(dist, V, parent);
}
 
// Driver Code
int main()
{int v;
  int graph[V][V];

cin>>v;
for(int i=0;i<V;i++)
{
  for(int j=0;j<V;j++)
  {
    cin>>graph[i][j];
  }
}
  
    dijkstra(graph, 0);
    return 0;
}
