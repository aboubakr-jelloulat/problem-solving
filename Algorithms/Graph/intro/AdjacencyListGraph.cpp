#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stdexcept>

class AdjacencyListGraph
{
    int vertices;
    bool directed;
    std::vector<std::list<int>> adj;

public:
    AdjacencyListGraph(int v, bool directed = false) : vertices(v), directed(directed), adj(v) {}

    void addEdge(int u, int v)
    {
        if (u < 0 || u >= vertices || v < 0 || v >= vertices)
            throw std::out_of_range("Vertex index out of range");

        adj[u].push_back(v);
        if (!directed)
            adj[v].push_back(u);
    }

    void removeEdge(int u, int v)
    {
        adj[u].remove(v);
        if (!directed)
            adj[v].remove(u);
    }

    bool hasEdge(int u, int v) const
    {
        for (int neighbor : adj[u])
            if (neighbor == v)
                return true;
        return false;
    }

    void BFS(int start) const
    {
        std::vector<bool> visited(vertices, false);
        std::queue<int> q;

        visited[start] = true;
        q.push(start);

        std::cout << "BFS from " << start << ": ";
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            std::cout << node << " ";
            for (int neighbor : adj[node])
            {
                if (!visited[neighbor])
                {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        std::cout << "\n";
    }

    void DFSHelper(int node, std::vector<bool> &visited) const
    {
        visited[node] = true;
        std::cout << node << " ";
        for (int neighbor : adj[node])
            if (!visited[neighbor])
                DFSHelper(neighbor, visited);
    }

    void DFS(int start) const
    {
        std::vector<bool> visited(vertices, false);
        std::cout << "DFS from " << start << ": ";
        DFSHelper(start, visited);
        std::cout << "\n";
    }

    void print() const
    {
        std::cout << " Adjacency List: \n";
        for (int i = 0; i < vertices; i++)
        {
            std::cout << "  " << i << " -> ";
            for (int neighbor : adj[i])
                std::cout << neighbor << " ";
            std::cout << "\n";
        }
    }
};

int main()
{
    AdjacencyListGraph g(5); // undirected, 5 vertices
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.print();
    g.BFS(0);
    g.DFS(0); 

    std::cout << "\nEdge (1,3) exists: " << (g.hasEdge(1, 3) ? "Yes" : "No") << "\n";
    g.removeEdge(1, 3);
    std::cout << "After removing (1,3): " << (g.hasEdge(1, 3) ? "Yes" : "No") << "\n";

    return 0;
}
