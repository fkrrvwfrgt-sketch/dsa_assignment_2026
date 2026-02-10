# Documentation: Task 7 - Dijkstra's Algorithm

## (a) Data Structure Definition
An **Adjacency Matrix** represents edge weights. Two arrays, `dist[]` (distance) and `sptSet[]` (visited status), track path costs.

## (b) Function Descriptions
- `minDistance()`: Finds the vertex with the smallest distance that hasn't been included in the shortest path tree yet.
- `dijkstra()`: Computes the shortest path from a source to all other vertices.

## (c) main() Organization
The `main()` function defines a hardcoded weighted graph and executes the algorithm starting from the first vertex (index 0).

## (d) Sample Output
Vertex   Distance from Source
0        0
1        10
2        50
3        30
4        60
