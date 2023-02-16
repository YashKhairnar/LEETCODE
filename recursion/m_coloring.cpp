//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    bool isSafe(int node, int col, bool graph[101][101], int n, int color[]){
        //k to iterate over all the edges with one vertex as "node" in the kth row
        for(int k=0; k<n; k++){
            // if adjacent node has same color
            if(k!=node && graph[k][node]==1 && color[k]==col)
              return false;
        }
        return true;
    }
    
    bool solve(int node, int color[], int m, int n, bool graph[101][101])
    {
        //base case
        if(node==n)
          return true;
          
        //try all colors for every node
        for(int col=1; col<=m; col++)
            {
                if(isSafe(node,col,graph,n,color))
                {
                   color[node]=col;
                   if (solve(node+1,color,m,n,graph)==true) return true;
                   color[node]=0;
                }
            }
             return false;
    }
    
    bool graphColoring(bool graph[101][101], int m, int n) 
    {
        int color[n]={0};
        if(solve(0,color,m,n,graph)) return true;
        return false;
      
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends