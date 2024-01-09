import java.util.*;

public class Main {

    public static void dijkstra(int[][] graph, int start) {
        int vertices = graph.length;
        int[] distances = new int[vertices];
        boolean[] visited = new boolean[vertices];

        // Initialize distances and visited array
        Arrays.fill(distances, Integer.MAX_VALUE);
        distances[start] = 0;

        for (int i = 0; i < vertices - 1; i++) {
            // Find the vertex with the minimum distance value
            visited[minVertex] = true;

            // Update distances of adjacent vertices
            for (int j = 0; j < vertices; j++) {
                if (!visited[j] && graph[minVertex][j] != 0 && distances[minVertex] != Integer.MAX_VALUE) {
                    int newDistance = distances[minVertex] + graph[minVertex][j];
                    if (newDistance < distances[j]) {
                        distances[j] = newDistance;
                    }
                }
            }
        }

        // Print the distances from the start vertex
        System.out.println("Shortest distances from vertex " + start + ":");
        for (int i = 0; i < vertices; i++) {
            System.out.println("To vertex " + i + ": " + distances[i]);
        }
    }

    private static int findMinVertex(int[] distances, boolean[] visited) {
        int minVertex = -1;
        for (int i = 0; i < distances.length; i++) {
            if (!visited[i] && (minVertex == -1 || distances[i] < distances[minVertex])) {
                minVertex = i;
            }
        }
        return minVertex;
    }

    public static void main(String[] args) {
        // Example graph represented as an adjacency matrix
        int[][] graph = {
                {0, 2, 4, 0, 0, 0},
                {2, 0, 1, 7, 0, 0},
                {4, 1, 0, 5, 0, 0},
                {0, 7, 5, 0, 3, 2},
                {0, 0, 0, 3, 0, 6},
                {0, 0, 0, 2, 6, 0}
        };

        // Starting vertex
        int startVertex = 0;

        // Run Dijkstra's algorithm
        dijkstra(graph, startVertex);
    }
}
