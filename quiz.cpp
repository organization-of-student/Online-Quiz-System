#include "quiz.h"
#include <iostream>
using namespace std;

Quiz::Quiz() : score(0) {}

void Quiz::addQuestion(const std::string& questionText, const std::vector<std::string>& options, int correctAnswer) {
    questions.push_back({questionText, options, correctAnswer});
}

void Quiz::start() {
    int questionNumber = 1;
    for (const auto& question : questions) {
        cout << "Question " << questionNumber++ << ": " << question.questionText << endl;
        for (size_t i = 0; i < question.options.size(); i++) {
            cout << i + 1 << ". " << question.options[i] << endl;
        }
        cout << "Your answer (1-" << question.options.size() << "): ";
        int userAnswer;
        cin >> userAnswer;

        if (userAnswer - 1 == question.correctAnswer) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Wrong! The correct answer was: " << question.options[question.correctAnswer] << endl;
        }
        cout << endl;
    }
    cout << "Quiz Finished! Your score: " << score << " out of " << questions.size() << endl;
}
