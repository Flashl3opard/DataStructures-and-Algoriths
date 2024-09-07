// Breadth-First Search algorithm: { BFS }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> adj;
    for (int i = 0; i < n; ++i)
    {
        cin >> adj[i];
    }
    int vis[n] = {0};
    queue<int> q;
    q.push(0);
    vector<int> BFS;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        BFS.push_back(node);

        for (auto it : adj[node])
        {
            vis[it] = 1;
            q.push(it);
        }
    }

    for (auto ans : BFS)
    {
        cout << ans << " ";
    }
}