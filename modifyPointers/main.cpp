#include <iostream>

// TODO: Implement foo() and bar()
// foo() should modify value under passed pointer to 10
 
   int foo(int *number){
     return *number+=10;
   }

// bar() should modify value under passed pointer to 20
// Can we have a pointer to const or a const pointer?

   int bar(int * const pointer){
       return *pointer+=20;
   }


int main() {
    int number = 5;
    int* const pointer = &number;
    std::cout << number << '\n';
    foo(&number);
    std::cout << number << '\n';
    bar(pointer);
    std::cout << number << '\n';

    return 0;
}

