# cs106l
Examples from CS106L stanford
## Lecture Streams 1
I am currently using g++ compiler  downloader with mingw.
Commadn i am using to compile the code  is :
g++ -std=c++17 -Wall -O0 stringstream.cpp -o string

## Structured Bindings
In structured bindings example, we can only have auto[var, var] , we cannot have int[var, var]. The
error we will have is "structured binding declaration cannot have type 'int'" . Furthermore, this 
feature will only work in C++ 17
## Vectors and Linked List (Sequence Containers)
If you are inserting something at the start, linked list is better than vector =, otherwise both
both do the same job complexity wise
### Vector and Deque
Vector is the type of sequence that should be used as default. Deque is the data structure of 
choice when most insetion and deletion take place at the beinnging or the end of the sequence.

vec.at(i) throws an exception
vec[i] causes un defined behavior --> this is known as bracket notation
## Associative Containers
Map/set: keys in sorted order, faster to iterate through a range of elements.
Unordered map/set: faster to access individual elements

