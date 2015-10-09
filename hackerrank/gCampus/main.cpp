#include <iostream>
#include <fstream>
#include <iomanip>
#include <queue>
// limit of unsigned int
#define INFINITY 65535
using namespace std;
struct nodeDistance
{
    int node;
    unsigned int distance;
};

// This is the basis on which the elements of a priority queue are sorted and
// kept in the queue, here the criteria is that the node with smaller distance should
// come above the one with larger distance

class CompareDist
{
    public:
        bool operator()(nodeDistance& n1, nodeDistance& n2)
        {
           if (n1.distance < n2.distance)
                return true;
           else
                return false;
        }
};

// This implementation take
// s --> source node (represented by an index)
// size --> the total number of nodes in the graph
// graph --> pointer to a 2D array graph[size][size] that contains information about all the edges in the graph
// Instead of a 2D array you can also use an adjacency list if the graph is sparse

void dijkstra(int s, int size, unsigned int **graph)
{
    int mini;
    bool *visited = new bool [size];
    unsigned int *dist = new unsigned int [size];

    // initialize the dist of each node as infinity and visited status as false
    for (int i = 0; i < size;   i)
    {
        dist[i] = INFINITY;
        visited[i] = false;
    }

    // the distance of the source to itself is 0
    dist[s] = 0;

    // instantiate a priority queue with the structure and comparison criteria
    // as defined above
    priority_queue< nodeDistance, vector< nodeDistance >, CompareDist> pq;

    // Create the first node as the source and put it into the queue
    nodeDistance first = {s,0};
    pq.push(first);

    // While queue is not empty, pick the topmost node
    // using it's neighbors update the distance of each node that can be reached
    // and insert that node in the priority queue
    while(!pq.empty())
    {
        nodeDistance temp = pq.top();
        pq.pop();
        int node= temp.node;
           if(visited[node])
                      continue;
           visited[node]=true;
        for(int i=0;i < size;i  ++)
        {
            if(graph[node][i]!=0 && !visited[i])
            {
                // Update the distance if it is smaller than the current distance
                           int t= dist[node]  +  graph[node][i];
                if(dist[i] > t)
                {   dist[i]=t;

                    nodeDistance newNode;
                    newNode.node=i;
                    newNode.distance=dist[i];
                    pq.push(newNode);
                }
            }
        }
    }

    cout << "The shortest distance from " << s << " to all the nodes is" << endl;
    for(int i=0;i < size;i  )
    {
        cout << i << " : " << dist[i] << endl;
    }
    cout << endl << endl;
}
int main(){
    dijkstra();
}
