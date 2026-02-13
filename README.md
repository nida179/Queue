## Queue Implementation in C++

A Collection of different Queue data structure implementations in C++, demonstrateing various approaches to queue mangement.

## 🎯 About 
This repository contains four different implementations of the Queue data structure in C++. Each implementation demonstrate different approach to managing queues, from simple array-based to circular queues with dynamic memory allocation.

## 📚 Queues Types

### 1. ArrayQueue (`ArrayQueue.cpp`)
A basic queue implementation using a static array
**Characteristics:**
- Fixed size array
- Simple FIFO (First In First Out) structure
- Front and rear indexes to track the queue
- **Limitation:** Once rear reaches the end, cannot resuse freed front space (leads to waste memory).

**When to use:** When you need a simple queue with a known maximum size and don't need to reuse freed space.
---

### 2. Dynamic Queue (`DynamicQueue.cpp`)
A queue implementation using a linked list for dynamic memory allocation.
**Characteristics:**
- Uses linked list (nodes with pointers)
- No fixed size limitation
- Grows and shrinks dynamically as needed
- Only limited by available memory

**When to use:** When queue size is unpredictable or needs to grow/shrink frequently.
---

### 3. Circular Array Queue (`CircularArrayQueue.cpp`)
An improved array-based queue that treats the array as circular.
**Characteristics:**
- Fixed size array but with wrap-around capability
- Uses modulo arithmetic `(index + 1) % size` to wrap around
- Efficiently reuses freed front space
- Avoids the waste problem of basic array queue

**When to use:** When you need a fixed-size queue but want to efficiently reuse memory space.
---

### 4. Circular Linked List Queue (`CircularLinkedListQueue.cpp`)
A dynamic queue where the last node points back to the first node.
**Characteristics:**
- Uses circular linked list structure
- Last node's next pointer points to the first node
- Dynamic size (no fixed limit)
- Maintains circular property: `rear->next = front`

**When to use:** When you need both dynamic sizing and want to maintain circular properties for special use cases.
---

## ✨ Features
All queue implementations support the following operations:
- ✅ **Enqueue:** Add element to the rear
- ✅ **Dequeue:** Remove element from the front
- ✅ **Display:** Show all elements in the queue
- ✅ **Peek:** View the front element without removing it
- ✅ **isEmpty:** Check if queue is empty
- ✅ **isFull:** Check if queue is full (for array-based queues)
- ✅ **getSize:** Get the number of elements in the queue


## 📖 Learning Resources
**Key Concepts**
FIFO Principle: First In, First Out
Front Pointer: Points to the first element
Rear Pointer: Points to the last element
Circular Queues: Use modulo to wrap around
Dynamic Memory: Using malloc/new for linked lists
Applications of Queues
CPU scheduling
Printer queue management
Breadth-First Search (BFS) in graphs
Handling asynchronous data transfer
Call center phone systems

## 🤝 Contributing
Feel free to fork this repository and submit pull requests for any improvements!

## 📝 License
This project is open source and available for educational purposes. 
## Author 
- NIDA HAFEEZ
  
