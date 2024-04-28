#represent graph 


#Networkx
import networkx as nx
import matplotlib.pyplot as plt



matrix = [
    [0,1,0,0,0,0,0,0], 
    [1,0,1,1,0,0,0,1],
    [0,1,0,1,0,0,0,0],
    [0,1,1,0,1,0,0,0],
    [0,0,0,1,0,1,0,0],
    [0,0,0,0,1,0,1,0],
    [0,0,0,0,0,1,0,0],
    [0,1,0,0,0,0,0,0]
]

G = nx.Graph()
G.add_nodes_from(range(1,9))
for i in range(8):
    for j in range(8):
        if matrix[i][j] == 1:
            G.add_edge(i+1,j+1)


nx.draw(G, with_labels=True)
plt.show()
print("The number of nodes is", len(G.nodes()))
