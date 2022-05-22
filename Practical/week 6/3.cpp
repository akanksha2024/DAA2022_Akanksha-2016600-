#include<iostream>
#include<set>
#define V 5
using namespace std;
bool dfs(int curr, set<int>&wSet, set<int>&gSet, set<int>&bSet,int graph[V][V]) {
   //moving curr to white set to grey set.
   wSet.erase(wSet.find(curr));
   gSet.insert(curr);

   for(int v = 0; v < V; v++) {
      if(graph[curr][v] != 0) {    //for all neighbour vertices
         if(bSet.find(v) != bSet.end())
            continue;    //if the vertices are in the black set
         if(gSet.find(v) != gSet.end())
            return true;    //it is a cycle
         if(dfs(v, wSet, gSet, bSet,graph))
            return true;    //cycle found
      }
   }

   //moving v to grey set to black set.
   gSet.erase(gSet.find(curr));
   bSet.insert(curr);
   return false;
}

bool hasCycle(int graph[V][V]) {
   set<int> wSet, gSet, bSet;    //three set as white, grey and black
   for(int i = 0; i<V; i++)
      wSet.insert(i);    //initially add all node into the white set

   while(wSet.size() > 0) {
      for(int current = 0; current < V; current++) {
         if(wSet.find(current) != wSet.end())
            if(dfs(current, wSet, gSet, bSet,graph))
               return true;
      }
   }
   return false;
}

int main() {
  int V;
  cin>>V;
   int graph[V][V];
   for(int i=0;i<V;i++)
   {
     for(int j=0;j<V;j++)
     cin>>graph[i][j];
   }
   
   bool res;
   res = hasCycle(graph);
   if(res)
      cout << "The graph has cycle." << endl;
   else
      cout << "The graph has no cycle." << endl;
}
