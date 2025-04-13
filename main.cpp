#include "quiz.h"
#include <iostream>
using namespace std;

int main() {
    Quiz quiz;

    quiz.addQuestion("What is the capital of France?", {"Berlin", "Madrid", "Paris", "Rome"}, 2);
    quiz.addQuestion("Which programming language is used for web development?", {"C++", "HTML", "Python", "Java"}, 1);
    quiz.addQuestion("Who developed C++?", {"Dennis Ritchie", "Bjarne Stroustrup", "James Gosling", "Guido van Rossum"}, 1);
    quiz.addQuestion("What is the file extension of C++ source files?", {".py", ".java", ".cpp", ".cxx"}, 2);
    quiz.addQuestion("What is the output of: cout << 2 + 3;?", {"5", "2", "3", "Error"}, 0);
    quiz.addQuestion("What keyword is used to define a class in C++?", {"struct", "class", "object", "define"}, 1);
    quiz.addQuestion("Which operator is used to access members of a class in C++?", {".", "->", "::", "&"}, 0);
    quiz.addQuestion("What does OOP stand for?", {"Object-Oriented Programming", "Output-Oriented Programming", "Operating Object Program", "None of the above"}, 0);
    quiz.addQuestion("Which function is mandatory in a C++ program?", {"start()", "main()", "init()", "run()"}, 1);
    quiz.addQuestion("What does the 'new' keyword do in C++?", {"Deletes an object", "Creates an object", "Allocates memory", "None of the above"}, 2);

    cout << "Welcome to the Online Quiz System!" << endl;
    cout << "You will be presented with multiple-choice questions." << endl;
    cout << "Type the number corresponding to your choice." << endl;
    cout << "Good luck!" << endl << endl;

    quiz.start();

    return 0;
}
