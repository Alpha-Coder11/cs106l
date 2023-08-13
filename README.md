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
