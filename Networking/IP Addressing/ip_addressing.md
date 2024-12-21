# IP Addressing

## 1. IPv4 and IPv6

### **IPv4 (Internet Protocol Version 4):**
- **Format**: 32-bit address written in decimal, divided into 4 octets (e.g., `192.168.1.1`).
- **Address Space**: About 4.3 billion unique addresses (2³²).
- **Limitations**: The rapid growth of devices led to a shortage of IPv4 addresses.
- **Example**: `192.168.0.1`

### **IPv6 (Internet Protocol Version 6):**
- **Format**: 128-bit address written in hexadecimal, divided into 8 groups separated by colons (e.g., `2001:0db8:85a3:0000:0000:8a2e:0370:7334`).
- **Address Space**: Vastly larger than IPv4 (2¹²⁸ addresses), sufficient for the foreseeable future.
- **Simplification**:
  - Leading zeroes in each group can be omitted (`2001:db8::370:7334`).
  - Consecutive zero groups can be replaced with `::` (but only once per address).
- **Example**: `2001:0db8:85a3::8a2e:0370:7334`

### **Key Differences:**
| Feature           | IPv4                | IPv6                   |
|--------------------|---------------------|------------------------|
| Address Format     | 32-bit, decimal     | 128-bit, hexadecimal   |
| Address Space      | Limited (~4.3B)     | Vast (2¹²⁸)            |
| Security           | Optional (IPSec)   | Built-in (mandatory)   |
| Example            | 192.168.0.1         | 2001:db8::370:7334     |

---

## 2. Public vs. Private IP Addresses

### **Public IP Addresses:**
- Used for communication over the internet.
- Assigned by ISPs (Internet Service Providers).
- Globally unique.

### **Private IP Addresses:**
- Used within private networks (e.g., home, office).
- Cannot be routed on the public internet.
- Require NAT (Network Address Translation) to access the internet.

### **Reserved Private Ranges (IPv4):**
| Range                       | Example        | Usage                |
|-----------------------------|----------------|----------------------|
| 10.0.0.0 - 10.255.255.255   | 10.0.0.1       | Large organizations |
| 172.16.0.0 - 172.31.255.255 | 172.16.0.1     | Medium networks     |
| 192.168.0.0 - 192.168.255.255 | 192.168.1.1   | Home networks       |

- **IPv6 Private IPs**: Use the `fc00::/7` block, also known as **Unique Local Addresses (ULA)**.

---

## 3. Subnetting and CIDR (Classless Inter-Domain Routing)

### **Subnetting:**
- Divides a large network into smaller subnetworks for efficient IP address usage.
- Example: Splitting `192.168.1.0/24` into smaller subnets:
  - `192.168.1.0/26` → 64 addresses.
  - `192.168.1.64/26` → 64 addresses.

### **CIDR (Classless Inter-Domain Routing):**
- Introduced to replace the rigid **class-based IP addressing** (Class A, B, C).
- Uses a **prefix length** to denote the number of network bits in an IP address.
  - Example: `192.168.1.0/24` (24 bits for the network, 8 bits for hosts).

### **CIDR Notation:**
- `192.168.1.0/24`: 
  - **Network**: First 24 bits (`192.168.1`).
  - **Host Range**: Last 8 bits for devices (`0-255`).

---

## 4. Loopback Address
- A special reserved address used for testing the local machine.
- **IPv4**: `127.0.0.1`
- **IPv6**: `::1`
- **Purpose**:
  - Tests software or network stack without sending traffic to an actual network.
  - Example: Pinging `127.0.0.1` checks if your device's networking is functioning.

---
