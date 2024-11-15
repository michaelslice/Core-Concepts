# What is Redundancy?
Redundancy refers to the duplication of critical components or functions to increase the reliability, availability, and fault tolerance of a system. The primary purpose of redundancy is to prevent system failures and ensure continuous operation, even in the event of hardware, software, or network issues. Redundant systems are designed to maintain functionality and performance despite component failures, providing increased resilience against downtime and data loss.

Redundancy plays a key role in removing the single points of failure in the system and provides backups if needed in a crisis
# What is Replication?
Database replication is the process of copying and synchronizing data from one database to one or more additional databases. This is commonly used in distributed systems where multiple copies of the same data are required to ensure data availability, fault tolerance, and scalability.

Replication is widely used in many database management systems (DBMS), usually with a primary-replica relationship between the original and the copies. The primary server gets all the updates, which then ripple through to the replica servers
# Replication Methods
## 1. Primary-Replica (Master-Slave) Replication
Explanation
- In primary-replica replication, there is one primary (master) database and one or more replica (slave) databases. The primary database handles all write operations, while the replicas handle read operations. Changes made in the primary database are asynchronously replicated to the replica databases.