#ifndef MYHEADER_H
#define MYHEADER_H

// Include any necessary C++ standard library headers here
#include <iostream>
#include <vector>

// Declare a namespace if needed
namespace MyNamespace
{

    // Declare global constants or macros
    const int MAX_VALUE = 100;

    // Declare a class
    class MyClass
    {
    public:
        // Constructor
        MyClass();

        // Member function declarations
        void myMethod1();
        int myMethod2(int param1, double param2);

    private:
        // Member variables
        int data;
    };

    // Function prototypes
    void myFunction1();
    void printVector(const std::vector<int> &vec);
} // End of namespace MyNamespace

#endif /* MYHEADER_H */