//
// Created by osama on 6/20/2026.
//

#include <iostream>
using namespace std;

int readNumber(string message) {
    int number= 0;

    cout<< message;
    cin>> number;

    return number;

}

enum enQuestionLevel{Easy = 1, Med = 2, Hard = 3, Mix = 4};
enum enOperationType{Add = 1 , Sub = 2, Mul = 3, Div =4 , all = 5};
enum enQuizResult {Fail , Pass};

struct Question {
    int questionNumber;
    int operand1;
    char operation;
    int operand2;
    int correctAnswer;
    int userAnswer;
};

struct Quiz {
    int numOfQuestions;
    enQuestionLevel questionLevel;
    enOperationType operationType;
    int numberOfCorrectAnswers = 0;
    int numberOfWrongAnswers = 0;
    enQuizResult quizResult;
};

int generateRandomNumber(int from, int to) {
    return (rand() % (to-from +1)+ from);
}

int generateRandomOperand(enQuestionLevel questionLevel) {
    switch (questionLevel) {
        case(Easy):
            return generateRandomNumber(1, 10);
            break;
        case(Med):
            return generateRandomNumber(10, 100);
            break;
        case(Hard):
            return generateRandomNumber(101, 900);
            break;
        case(Mix):
            return generateRandomNumber(1, 900);
            break;
        default:
            return 0;

    }
}

char generateRandomOperation() {
    char arrayOfChars[] = {'+', '-', '*', '/'};
    return arrayOfChars[generateRandomNumber(0 , 3)];
}

char enumToCharOperation(enOperationType operationType) {
    switch (operationType) {
        case(Add):
            return '+';
            break;
        case(Sub):
            return '-';
            break;
        case(Mul):
            return '*';
            break;
        case(Div):
            return '/';
            break;
        case(all):
            return generateRandomOperation();
            break;
        default:
            return 'X';

    }
}

string enumToStringResult(enQuizResult quizResult) {
    string quizResults[] = {"Fail" , "Pass"};
    return quizResults[quizResult];
}

string enumToStringQuestionLevel(enQuestionLevel questionLevel) {
    string questionLevels[] = {"Easy" , "Med", "Hard", "Mix"};
    return questionLevels[questionLevel-1];
}

string enumToStringOperationType(enOperationType operationType) {
    string operationTypes[] = {"Addition" , "Subtraction", "Multiplication", "Division" ,"Mix"};
    return operationTypes[operationType-1];
}

string tabs(int numOfTabs) {
    string t = "";

    for (int i = 0; i< numOfTabs; i++)
        t+= '\t';

    return t;
}

int calculateAnswer(Question question) {
    switch (question.operation) {
        case('+'):
            return question.operand1 + question.operand2;
            break;
        case('-'):
            return question.operand1 - question.operand2 ;
            break;
        case('*'):
            return question.operand1 * question.operand2;
            break;
        case('/'):
            return question.operand1 / question.operand2;
            break;
        default:
            return 0;

    }

}

void printQuestion(int numOfQuestions, Question question) {
    cout<< "Question[" << question.questionNumber << '/' << numOfQuestions << "]:\n\n";
    cout<< question.operand1 << "\n";
    cout<< question.operand2 << "  " << question.operation << "\n_____________\n";
}

enQuizResult getQuizResult(Quiz quiz) {
    if (quiz.numberOfCorrectAnswers >= quiz.numberOfWrongAnswers)
        return Pass;
    else
        return Fail;
}

void printQuizResults(Quiz quiz) {
    cout<< "___________________________________________\n";
    cout<< tabs(2) << "Final Result: " << enumToStringResult(quiz.quizResult) << '\n';
    cout<< "___________________________________________\n";
    cout<< "Number Of Questions: " << quiz.numOfQuestions << '\n';
    cout<< "Question Level     : " << enumToStringQuestionLevel(quiz.questionLevel) << '\n';
    cout<< "Operation Type     : " << enumToStringOperationType(quiz.operationType) << '\n';
    cout<< "Number Of Right Answers: " << quiz.numberOfCorrectAnswers << '\n';
    cout<< "Number Of Wrong Answers: " << quiz.numberOfWrongAnswers << '\n';
    cout<< "___________________________________________\n\n";
}

bool compareAnswers(Question question) {
    return question.correctAnswer == question.userAnswer;
}

void resetQuiz(Quiz &quiz) {
    quiz.numberOfCorrectAnswers = 0;
    quiz.numberOfWrongAnswers = 0;
    system("cls");
    system("color 0F");
}

void quizRound(Quiz &quiz) {
    Question question;

    for (int i = 1; i<= quiz.numOfQuestions ; i++) {

        question.questionNumber = i;
        question.operand1 = generateRandomOperand(quiz.questionLevel);
        question.operand2 = generateRandomOperand(quiz.questionLevel);
        question.operation = enumToCharOperation(quiz.operationType);

        printQuestion(quiz.numOfQuestions ,question);
        question.userAnswer = readNumber("= ");
        question.correctAnswer = calculateAnswer(question);

        if (compareAnswers(question)) {
            quiz.numberOfCorrectAnswers++;
            system("color 20");
        }
        else {
            quiz.numberOfWrongAnswers++;
            system("color 40");
        }


    }

    quiz.quizResult = getQuizResult(quiz);


}

void startQuiz() {
    char continueQuiz = 'Y';
    Quiz quiz;
    do {
        resetQuiz(quiz);
        quiz.numOfQuestions = readNumber("Enter Number Of Questions: ");
        quiz.questionLevel = (enQuestionLevel) readNumber("Enter Operation Type: [1]Easy [2]Med [3]Hard [4]Mix : ");
        quiz.operationType = (enOperationType) readNumber("Enter Operation Type: [1]Add [2]Sub [3]Mul [4]Div [5]Mix : ");
        quizRound(quiz);
        printQuizResults(quiz);

        cout<< "Do You Want To Play Another Game? [Y]Yes, [N]No:";
        cin >> continueQuiz;

    } while (continueQuiz == 'y' || continueQuiz == 'Y');

}


int main() {
    srand((unsigned) time(NULL));

    startQuiz();

}
