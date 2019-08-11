#include <iostream>
//Including this header allows you to perform input output operations

// "//" marks the start of a single line comment

// "/*" used with "*/" is for making multiline comments

/* If you uncomment the line below, note that you need to remove "std::" from all
function calls that use it because this makes anything from std always visible. */

//using namespace std;
int main(){
  /****
  Braces are a good way to make where your function starts or ends. An alternate
  way of writing this whole main() function is one line:
  int main(){ std::cout << "Hello World!";}
  ****/

  /****
  Explanation for std::cout
  First, know that static functions belong to a class, so they can be accessed
  without the instantiation of an object. Non-static functions require instantiation.
  The "::" is called a scope operator and it means membership of a class.
  The usual "." means membership of an object. "::" will typically be used for
  static parts of a class while "." is used for objects of a class.
  ****/

  //The std namespace has a static method called cout which takes in anything after "<<" for output
  //Note: Namespaces are used to organize code to prevent name collisions
  std::cout << "Hello World!" << std::endl;
  // "\n" is an Escape Sequence. This one in particular means "Insert a newline"
  // endl is a function that appends a newline character and flushes the buffer for sure, ensuring that your output is printed. Be warned, spamming endl may be detrimental to performance.
}
