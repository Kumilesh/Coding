// C++ implementation
#include <bits/stdc++.h>
using namespace std;
int ct[50000];
// An utility function to add an edge in an
// undirected graph.
void addEdge(vector<int> v[],int x,int y)
{
	v[x].push_back(y);
	v[y].push_back(x);
    //cout<<v[x][0];
}

// A function to print the path between
// the given pair of nodes.
void printPath(vector<int> stack)
{
	int i;
	for (i = 0; i < (int)stack.size() ;i++) {
        //cout<<stack[i]<<"-->\n";
		ct[stack[i]]+=1; 
	}
}
// DFS of graph recursively
// from a given vertex x.
void DFS(vector<int> v[],
		bool vis[],
		int x,
		int y,
		vector<int> stack)
{
	stack.push_back(x);
	if (x == y) {

		// print the path and return on
		// reaching the destination node
		printPath(stack);
		return;
	}
	vis[x] = true;

	// if backtracking is taking place
	if (!v[x].empty()) {
		for (int j = 0; j < v[x].size(); j++) {
			// if the node is not visited
			if (vis[v[x][j]] == false)
				DFS(v, vis, v[x][j], y, stack);
		}
	}

	stack.pop_back();
}

// A utility function to initialise
// visited for the node and call
// DFS function for a given vertex x.
void DFSCall(int x,int y,vector<int> v[],int n,vector<int> stack)
{
	// visited array
	bool vis[n + 1];

	memset(vis, false, sizeof(vis));

	// DFS function call
	DFS(v, vis, x, y, stack);
}

// Driver Code
int main()
{
	// int n = 10;
    int n,m,k;
    cin>>n>>m>>k;
    //cout<<n<<m<<k;
    vector<int> v[n+1], stack;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        addEdge(v,a,b);
    }
    for(int i=0;i<m;i++)
    {
        int c,d;
        cin>>c>>d;
        //cout<<c<<d;
	DFSCall(c, d, v, n, stack);
    }
    string satis;
    cin>>satis;
    //cout<<satis;
    for(int i=1;i<=n;i++)
    {
        if(satis[i-1]=='+')
        {
            if(ct[i]>k-1)
            {
                cout<<"YES"<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
        }
        else if(satis[i-1]=='-')
        {
            if(ct[i]<k+1)
            {
                cout<<"YES"<<"\n";
            }
             else
            {
                cout<<"NO"<<"\n";
            }
        }

        //cout<<ct[i];
    }
	return 0;
}
