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
<p>if there is a map lets say frequency, then to check whether a certain key exist inside that map or not we 
can use frequency.count(key) to check that. since in map, we can only have one unique key so its answer will be 0
or 1.
Maps and sets are implemented under the hood using 
binary trees
## Iterators
We can't iterate over associative containers like 
we iterate over vectors or deques (using for loop) 
because map or set are not sequenced perperly, 
they are more of a un organised data containers 
Iterators allow iteration over any container 
whether is ordered or not Iterators let us view a 
non-linear collection in a linear manner Types of 
Iterators:
Input -> For sequential, singal-pass
Read only i.e can only be dereferenced on right side of
expression. They can only be incremented by 1. Used by input streams
Output -> For sequential, single pass output
Write only, only set value for iter. Output streams, only writng to output streams.
Copy function from algorithm library. input iterator to read and output iterator to write.
Forward -> Same as combining input and output iterators, except can make multiple passes.
Can read from and write to (if not const iterator). replace function.
Bi-directional iterators
Same as forward iterators except can also go backwards with decrement operator --.
Used in function such as reverse
map and set
Random Access iterator
Same as bidirectional iterators except can be
incremented or decremented by arbitrary amount 



