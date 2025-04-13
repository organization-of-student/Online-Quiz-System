#ifndef QUIZ_H
#define QUIZ_H

#include <string>
#include <vector>

struct Question {
    std::string questionText;
    std::vector<std::string> options;
    int correctAnswer; // Index of the correct option
};

class Quiz {
private:
    std::vector<Question> questions;
    int score;

public:
    Quiz();
    void addQuestion(const std::string& questionText, const std::vector<std::string>& options, int correctAnswer);
    void start();
};

#endif
