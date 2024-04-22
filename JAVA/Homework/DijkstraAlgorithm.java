import java.util.*;

public class DijkstraAlgorithm {

    static class Edge {
        int target;
        int weight;

        Edge(int target, int weight) {
            this.target = target;
            this.weight = weight;
        }
    }

    public static void dijkstra(int[][] graph, int source) {
        int numNodes = graph.length;
        int[] distances = new int[numNodes];
        boolean[] visited = new boolean[numNodes];

        Arrays.fill(distances, Integer.MAX_VALUE);
        distances[source] = 0;

        for (int i = 0; i < numNodes - 1; i++) {
            int minIndex = minDistance(distances, visited);
            visited[minIndex] = true;

            for (int j = 0; j < numNodes; j++) {
                if (!visited[j] && graph[minIndex][j] != 0 &&
                        distances[minIndex] != Integer.MAX_VALUE &&
                        distances[minIndex] + graph[minIndex][j] < distances[j]) {
                    distances[j] = distances[minIndex] + graph[minIndex][j];
                }
            }
        }

        printSolution(distances);
    }

    public static int minDistance(int[] distances, boolean[] visited) {
        int min = Integer.MAX_VALUE;
        int minIndex = -1;
        int numNodes = distances.length;

        for (int i = 0; i < numNodes; i++) {
            if (!visited[i] && distances[i] <= min) {
                min = distances[i];
                minIndex = i;
            }
        }

        return minIndex;
    }

    public static void printSolution(int[] distances) {
        System.out.println("Vertex \t Distance from Source");
        for (int i = 0; i < distances.length; i++) {
            System.out.println(i + " \t\t " + distances[i]);
        }
    }

    public static void main(String[] args) {
        int[][] graph = {
                {0, 4, 0, 0, 0, 0, 0, 8, 0},
                {4, 0, 8, 0, 0, 0, 0, 11, 0},
                {0, 8, 0, 7, 0, 4, 0, 0, 2},
                {0, 0, 7, 0, 9, 14, 0, 0, 0},
                {0, 0, 0, 9, 0, 10, 0, 0, 0},
                {0, 0, 4, 14, 10, 0, 2, 0, 0},
                {0, 0, 0, 0, 0, 2, 0, 1, 6},
                {8, 11, 0, 0, 0, 0, 1, 0, 7},
                {0, 0, 2, 0, 0, 0, 6, 7, 0}
        };

        dijkstra(graph, 0);
    }
}

/*

Alaa Barka TP6
This Java code implements Dijkstra's algorithm, a popular algorithm used for finding the shortest path in a graph

1. The Edge Class
This class represents an edge in the graph. It holds information about the target node and the weight of the edge.

2. dijkstra Method
This method takes an adjacency matrix graph and a source vertex as inputs. It initializes arrays to keep track of distances from the source node to all other nodes and whether nodes have been visited or not. Then, it iterates through the nodes to find the shortest path.

3. minDistance Method
This method helps find the vertex with the minimum distance that hasn't been visited yet.

4. printSolution Method
This method simply prints out the distances from the source node to all other nodes.

5. main Method
In the main method, there's an example adjacency matrix representing a graph. This matrix defines the weights between nodes (0 indicates no direct edge).

JAVA OUTPUT : 
java -cp /tmp/e7C0xcNBFb DijkstraAlgorithm

Vertex 	 Distance from Source
0 		 01 		 4
2 		 123 		 19
4 		 21
5 		 11
6 		 9
7 		 8
8 		 14





*/
