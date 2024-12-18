# Load Balancing Algorithms
**Load Balancing Algorithm**: Is used to distribute incoming network requests to a server, we mainly want to do this to optimize server performance as well as user experience. These algorithms can consider factors such as server capacity, active connections, response times, and server health to make a informed decision to distribute incoming requests. 
## 1. Round Robin
This algorithm distributes incoming requests to servers in a cyclic order. It assigns a request to the first server, then moves to the second, third, and so on, and after reaching the last server, it starts again at the first.
### Pros:
- Ensures equal distribution of requests among the server, as each server gets a turn in a fixed order
- Efficient when servers have similiar capacities
### Cons:
- **No Load Awareness**: Does not take into account load or capacity of each server. All servers are treated equally regardless of their current state.
- **No Session Affinity**: Subsequent requests from the same client may be directed to different servers, problamatic for stateful applications. 
- **Performance Issues with Different Capacities**: May not perform optimally when servers have different capacities on varying workloads
- **Predictable Distributiuon Pattern**: Round robin is predictable in its request distribution pattern, which could potentially be exploited by attackers who can observe traffic patterns and might find vulnrabilities in specific servers by predicting which server will handle their request
### Use Cases
- **Homogeneous Environments**: Suitable for environments where all servers have similar capacity and performance.
- **Stateless Applications**: Works well for stateless applications where each request can be handled independently.

![alt text](https://www.designgurus.io/_next/image?url=https%3A%2F%2Fstorage.googleapis.com%2Fdownload%2Fstorage%2Fv1%2Fb%2Fdesigngurus-prod.appspot.com%2Fo%2Fefc0a2523515ad8ceae731901%3Fgeneration%3D1710916146987951%26alt%3Dmedia&w=1920&q=75&dpl=dpl_J4ULP5QJCNmFUZRAtuUj3A1nnwLi)


## 2. Least Connections
Is a dynamic load balancing technique that assigns incoming requests to the server with the fewest active connections at the time of the request. Ensures a more balanced load, when traffic patterns are unpredictable
### Pros:
- **Load Awareness**: Takes into account the current load on each server by considering the number of active connections, leading to better utilization of server resources.
- **Dynamic Distribution**: Adapts to changing traffic patterns and server loads, ensuring no single server becomes a bottleneck.
- **Efficiency in Heterogeneous Environments**: Performs well when servers have varying capacities and workloads, as it dynamically allocates requests to less busy servers.
### Cons:
- **Higher Complexity**: More complex to implement compared to simpler algorithms like Round Robin, as it requires real-time monitoring of active connections.
- **State Maintenance**: Requires the load balancer to maintain the state of active connections, which can increase overhead.
- **Potential for Connection Spikes**: In scenarios where connection duration is short, servers can experience rapid spikes in connection counts, leading to frequent rebalancing.
### Use Cases
- **Heterogeneous Environments**: Suitable for environments where servers have different capacities and workloads, and the load needs to be dynamically distributed.
- **Variable Traffic Patterns**: Works well for applications with unpredictable or highly variable traffic patterns, ensuring that no single server is overwhelmed.
- **Stateful Applications**: Effective for applications where maintaining session state is important, as it helps distribute active sessions more evenly.

![alt text](https://www.designgurus.io/_next/image?url=https%3A%2F%2Fstorage.googleapis.com%2Fdownload%2Fstorage%2Fv1%2Fb%2Fdesigngurus-prod.appspot.com%2Fo%2Fefc0a2523515ad8ceae731901%3Fgeneration%3D1710916146987951%26alt%3Dmedia&w=1920&q=75&dpl=dpl_J4ULP5QJCNmFUZRAtuUj3A1nnwLi)

## 3. Weighed Round Robin
Enahanced version from Round Robin load balancing algorithm. It assigns weights to each server based on their capacity or performance, distributing incoming requests proportionally according to these weights. This ensures that more powerful servers handle a larger share of the load, while less powerful servers handle a smaller share.
### Pros:
- **Load Distribution According to Capacity**: Servers with higher capacities handle more requests, leading to better utilization of resources.
- **Flexibility**: Easily adjustable to accommodate changes in server capacities or additions of new servers.
- **Improved Performance**: Helps in optimizing overall system performance by preventing overloading of less powerful servers.
### Cons:
- **Complexity in Weight Assignment**: Determining appropriate weights for each server can be challenging and requires accurate performance metrics.
- **Increased Overhead**: Managing and updating weights can introduce additional overhead, especially in dynamic environments where server performance fluctuates.
- **Not Ideal for Highly Variable Loads**: In environments with highly variable load patterns, WRR may not always provide optimal load balancing as it doesn't consider real-time server load.
### Use Cases
- **Heterogeneous Server Environments**: Ideal for environments where servers have different processing capabilities, ensuring efficient use of resources.
- **Scalable Web Applications**: Suitable for web applications where different servers may have varying performance characteristics.
- **Database Clusters**: Useful in database clusters where some nodes have higher processing power and can handle more queries.

![alt text](https://www.designgurus.io/_next/image?url=https%3A%2F%2Fstorage.googleapis.com%2Fdownload%2Fstorage%2Fv1%2Fb%2Fdesigngurus-prod.appspot.com%2Fo%2Fa3d3d6253f46e68628311f601%3Fgeneration%3D1710916264796846%26alt%3Dmedia&w=1920&q=75&dpl=dpl_J4ULP5QJCNmFUZRAtuUj3A1nnwLi)

## 4. Weighed Least Connection
Is a advanced load balancing algorithm, that combines the principles of the Least Connections and the Weighed Round Robin algorithm. It takes into account the current load(number of active connections) on each server and the relative capacity of each server(weight). This approach ensures that more powerful servers handle a proportionally larger share of the load, while also dynamically adjusting to the real-time load on each server
### Pros:
- **Dynamic Load Balancing**: Adjusts to the real-time load on each server, ensuring a more balanced distribution of requests.
- **Capacity Awareness**: Takes into account the relative capacity of each server, leading to better utilization of resources.
- **Flexibility**: Can handle environments with heterogeneous servers and variable load patterns effectively.
### Cons:
- **Complexity**: More complex to implement compared to simpler algorithms like Round Robin and Least Connections.
- **State Maintenance**: Requires the load balancer to keep track of both active connections and server weights, increasing overhead.
- **Weight Assignment**: Determining appropriate weights for each server can be challenging and requires accurate performance metrics.
### Use Cases
- **Heterogeneous Server Environments**: Ideal for environments where servers have different processing capacities and workloads.
- **High Traffic Web Applications**: Suitable for web applications with variable traffic patterns, ensuring no single server becomes a bottleneck.
- **Database Clusters**: Useful in database clusters where nodes have varying performance capabilities and query loads.

![alt text](https://www.designgurus.io/_next/image?url=https%3A%2F%2Fstorage.googleapis.com%2Fdownload%2Fstorage%2Fv1%2Fb%2Fdesigngurus-prod.appspot.com%2Fo%2F412afcbca9917e387f65a1f00%3Fgeneration%3D1710916773399399%26alt%3Dmedia&w=1920&q=75&dpl=dpl_J4ULP5QJCNmFUZRAtuUj3A1nnwLi)

## 5. IP Hash
IP Hash load balancing is a technique that assigns client requests to servers based on the client's IP address. The load balancer uses a hash function to convert the client's IP address into a hash value, which is then used to determine which server should handle the request. This method ensures that requests from the same client IP address are consistently routed to the same server, providing session persistence.
### Pros:
- **Session Persistence**: Ensures that requests from the same client IP address are consistently routed to the same server, which is beneficial for stateful applications.
- **Simplicity**: Easy to implement and does not require the load balancer to maintain the state of connections.
- **Deterministic**: Predictable and consistent routing based on the client's IP address.
### Cons:
- **Uneven Distribution**: If client IP addresses are not evenly distributed, some servers may receive more requests than others, leading to an uneven load.
- **Dynamic Changes**: Adding or removing servers can disrupt the hash mapping, causing some clients to be routed to different servers.
- **Limited Flexibility**: Does not take into account the current load or capacity of servers, which can lead to inefficiencies.
### Use Cases
- **Stateful Applications**: Ideal for applications where maintaining session persistence is important, such as online shopping carts or user sessions.
- **Geographically Distributed Clients**: Useful when clients are distributed across different regions and consistent routing is required.

![alt text](https://www.designgurus.io/_next/image?url=https%3A%2F%2Fstorage.googleapis.com%2Fdownload%2Fstorage%2Fv1%2Fb%2Fdesigngurus-prod.appspot.com%2Fo%2F0e3fb928f3235ebc3df99ea03%3Fgeneration%3D1710916546869822%26alt%3Dmedia&w=1920&q=75&dpl=dpl_J4ULP5QJCNmFUZRAtuUj3A1nnwLi)

## 6. Least Response Time
Least Response Time load balancing is a dynamic algorithm that assigns incoming requests to the server with the lowest response time, ensuring efficient utilization of server resources and optimal client experience. This approach aims to direct traffic to the server that can handle the request the fastest, based on recent performance metrics.
### Pros:
- **Optimized Performance**: Ensures that requests are handled by the fastest available server, leading to reduced latency and improved client experience.
- **Dynamic Load Balancing**: Continuously adjusts to changing server performance, ensuring optimal distribution of load.
- **Effective Resource Utilization**: Helps in better utilization of server resources by directing traffic to servers that can respond quickly.
### Cons:
- **Complexity**: More complex to implement compared to simpler algorithms like Round Robin, as it requires continuous monitoring of server performance.
- **Overhead**: Monitoring response times and dynamically adjusting the load can introduce additional overhead.
- **Short-Term Variability**: Response times can vary in the short term due to network fluctuations or transient server issues, potentially causing frequent rebalancing.
### Use Cases
- **Real-Time Applications**: Ideal for applications where low latency and fast response times are critical, such as online gaming, video streaming, or financial trading platforms.
- **Web Services**: Useful for web services and APIs that need to provide quick responses to user requests.
- **Dynamic Environments**: Suitable for environments with fluctuating loads and varying server performance.

![alt text](https://www.designgurus.io/_next/image?url=https%3A%2F%2Fstorage.googleapis.com%2Fdownload%2Fstorage%2Fv1%2Fb%2Fdesigngurus-prod.appspot.com%2Fo%2F0e3fb928f3235ebc3df99ea04%3Fgeneration%3D1710916569144605%26alt%3Dmedia&w=1920&q=75&dpl=dpl_J4ULP5QJCNmFUZRAtuUj3A1nnwLi)

## 7. Least Bandwidth
The Least Bandwidth load balancing algorithm distributes incoming requests to servers based on the current bandwidth usage. It routes each new request to the server that is consuming the least amount of bandwidth at the time. This approach helps in balancing the network load more efficiently by ensuring that no single server gets overwhelmed with too much data traffic.
### Pros:
- **Dynamic Load Balancing**: Continuously adjusts to the current network load, ensuring optimal distribution of traffic.
- **Prevents Overloading**: Helps in preventing any single server from being overwhelmed with too much data traffic, leading to better performance and stability.
- **Efficient Resource Utilization**: Ensures that all servers are utilized more effectively by balancing the bandwidth usage.
### Cons:
- **Complexity**: More complex to implement compared to simpler algorithms like Round Robin, as it requires continuous monitoring of bandwidth usage.
- **Overhead**: Monitoring bandwidth and dynamically adjusting the load can introduce additional overhead.
- **Short-Term Variability**: Bandwidth usage can fluctuate in the short term, potentially causing frequent rebalancing.
### Use Cases
- **High Bandwidth Applications**: Ideal for applications with high bandwidth usage, such as video streaming, file downloads, and large data transfers.
- **Content Delivery Networks (CDNs)**: Useful for CDNs that need to balance traffic efficiently to deliver content quickly.
- **Real-Time Applications**: Suitable for real-time applications where maintaining low latency is critical.

![alt text](https://www.designgurus.io/_next/image?url=https%3A%2F%2Fstorage.googleapis.com%2Fdownload%2Fstorage%2Fv1%2Fb%2Fdesigngurus-prod.appspot.com%2Fo%2Fefc0a2523515ad8ceae731902%3Fgeneration%3D1710916638131404%26alt%3Dmedia&w=1920&q=75&dpl=dpl_J4ULP5QJCNmFUZRAtuUj3A1nnwLi)