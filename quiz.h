#ifndef QUIZ_H
#define QUIZ_H

#include <string>
#include <vector>

class Quiz {
public:
    struct Question {
        std::string questionText;
        std::vector<std::string> options;
        int correctAnswerIndex;
    };

    void addQuestion(const std::string& questionText, const std::vector<std::string>& options, int correctAnswerIndex);
    void start() const; // Add "const" to match the implementation

private:
    std::vector<Question> questions;
};

#endif
