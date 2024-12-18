# RabbitMQ vs. Kafka vs. ActiveMQ

Here are the top differences between **RabbitMQ**, **Kafka**, and **ActiveMQ**:

## 1. Performance and Scalability
- **Kafka** is designed for high throughput and horizontal scalability, making it well-suited for handling large volumes of data. It generally outperforms RabbitMQ and ActiveMQ in terms of throughput, especially in scenarios with high data volume.
- **RabbitMQ** and **ActiveMQ** both offer high performance, but Kafka typically provides better scalability and throughput for large data streams.

## 2. Message Ordering
- **RabbitMQ** and **ActiveMQ** guarantee message ordering within a single queue or topic, respectively.
- **Kafka** ensures message ordering within a partition but **not** across partitions within a topic.

## 3. Message Priority
- **RabbitMQ** and **ActiveMQ** support **message prioritization**, allowing messages with higher priority to be processed before those with lower priority.
- **Kafka** does **not** have built-in message priority support.

## 4. Message Model
- **RabbitMQ** uses a queue-based message model based on the **Advanced Message Queuing Protocol (AMQP)**.
- **Kafka** uses a **distributed log-based** message model.
- **ActiveMQ** is built on the **Java Message Service (JMS)** standard and also uses a queue-based message model.

## 5. Durability
- All three message brokers support **durable messaging**, ensuring that messages are not lost in case of failures. However, the mechanisms for achieving durability differ:
  - **RabbitMQ** and **ActiveMQ** offer configurable durability options.
  - **Kafka** provides built-in durability through **log replication**.

## 6. Message Routing
- **RabbitMQ** offers advanced message routing capabilities through **exchanges** and **bindings**.
- **ActiveMQ** uses **selectors** and **topics** for more advanced routing.
- **Kafka's** message routing is relatively basic and relies on **topic-based partitioning**.

## 7. Replication
- **RabbitMQ** supports replication through **Mirrored Queues**.
- **Kafka** features built-in **partition replication**.
- **ActiveMQ** uses a **Master-Slave replication** mechanism.

## 8. Stream Processing
- **Kafka** provides native stream processing capabilities through **Kafka Streams**.
- **RabbitMQ** also supports stream processing.
- **ActiveMQ** relies on third-party libraries for stream processing.

## 9. Latency
- **RabbitMQ** is designed for **low-latency messaging**, making it suitable for use cases requiring near-real-time processing.

## 10. License
- **RabbitMQ** is licensed under the **Mozilla Public License**.
- Both **Kafka** and **ActiveMQ** are licensed under the **Apache 2.0 License**.
