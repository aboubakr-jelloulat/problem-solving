#include <iostream>
#include <vector>
#include <queue>
#include <stdexcept>

class AdjacencyMatrixGraph
{
    int vertices;
    bool directed;
    std::vector<std::vector<int>> matrix;

public:
    AdjacencyMatrixGraph(int v, bool directed = false)
        : vertices(v), directed(directed),
          matrix(v, std::vector<int>(v, 0)) {}

    void addEdge(int u, int v, int weight = 1)
    {
        if (u < 0 || u >= vertices || v < 0 || v >= vertices)
            throw std::out_of_range("Vertex index out of range");

        matrix[u][v] = weight;
        if (!directed)
            matrix[v][u] = weight;
    }

    void removeEdge(int u, int v)
    {
        matrix[u][v] = 0;
        if (!directed)
            matrix[v][u] = 0;
    }

    bool hasEdge(int u, int v) const
    {
        return matrix[u][v] != 0;
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
            for (int i = 0; i < vertices; i++)
            {
                if (matrix[node][i] && !visited[i])
                {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
        std::cout << "\n";
    }

    void DFSHelper(int node, std::vector<bool> &visited) const
    {
        visited[node] = true;
        std::cout << node << " ";
        for (int i = 0; i < vertices; i++)
            if (matrix[node][i] && !visited[i])
                DFSHelper(i, visited);
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
        std::cout << "=== Adjacency Matrix ===\n";
        std::cout << "    ";
        for (int i = 0; i < vertices; i++)
            std::cout << " " << i;
        std::cout << "\n    ";
        for (int i = 0; i < vertices; i++)
            std::cout << "--";
        std::cout << "\n";
        for (int i = 0; i < vertices; i++)
        {
            std::cout << "  " << i << " |";
            for (int j = 0; j < vertices; j++)
                std::cout << " " << matrix[i][j];
            std::cout << "\n";
        }
    }
};

int main()
{
    AdjacencyMatrixGraph g(5); // undirected, 5 vertices
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

    // Directed weighted example
    std::cout << "\n-- Directed weighted (4 vertices) --\n";
    AdjacencyMatrixGraph dg(4, true);
    dg.addEdge(0, 1, 5);
    dg.addEdge(0, 2, 3);
    dg.addEdge(1, 3, 2);
    dg.addEdge(2, 3, 4);
    dg.print();

    return 0;
}