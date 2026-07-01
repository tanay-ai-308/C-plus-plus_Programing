# C++_Programing
All the Snippets and Practice code for getting better hands-on this langauge

Mostly all programs are in client server architecture so there are 2 source file (client.cpp & server.cpp)
and 1 header file of server.cpp as server.h which will be required for client to use the fuctions and class

step by step process of compilation and understanding purpose of this design (client-server)

step-1 for server
    server will compile server.cpp and generate server.obj file by giving command like
    cl /c server.cpp
    g++ -c server.cpp -o

step-2 for server
    create server.h file which contain class design (data member,member function)

step-3 for server
    give server.obj and server.h to client.

step-4 for client
    server will now use the header file to complete his tasks.
    client will compile his code as :- (header file in respective directory)
    cl/g++ client.cpp server.obj

why giving server.obj file instead to client ?
-> By giving obj file we can keep implementation hidden and code is protected.
    so we need to give header file also to cilent, another benifit of this is we 
    can keep wrapper function and change the implementation and do enhancement internally
    No need for change the code to client side, it will provide client COMFORT.