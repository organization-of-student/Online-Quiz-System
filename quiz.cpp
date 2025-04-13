#include "quiz.h"
#include <iostream>
using namespace std;

void Quiz::addQuestion(const string& questionText, const vector<string>& options, int correctAnswerIndex) {
    Question q;
    q.questionText = questionText;
    q.options = options;
    q.correctAnswerIndex = correctAnswerIndex; // This line is correct
    questions.push_back(q);
}

void Quiz::start() const { // Matches the prototype in quiz.h
    int score = 0;

    for (size_t i = 0; i < questions.size(); ++i) {
        const Question& q = questions[i];
        cout << q.questionText << endl;

        for (size_t j = 0; j < q.options.size(); ++j) {
            cout << j + 1 << ". " << q.options[j] << endl;
        }

        int userAnswer;
        cout << "Your answer: ";
        cin >> userAnswer;
        if (userAnswer - 1 == q.correctAnswerIndex) {
            score++;
        }
    }

    cout << "Your score: " << score << "/" << questions.size() << endl;
}
