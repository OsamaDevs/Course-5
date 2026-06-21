//
// Created by osama on 6/20/2026.
//

#include <iostream>
using namespace std;

enum enGameChoice{Rock = 1, Paper = 2, Scissors = 3};
enum enWinner {User = 1 , Computer = 2, NoWinner = 3};

struct RoundInfo {
    short roundNumber = 0;
    enGameChoice userChoice;
    enGameChoice computerChoice;
    enWinner roundWinner;
    string winnerName;
};

struct FinalGameInfo {
    short totalGameRounds = 0;
    short totalUserWins = 0;
    short totalComputerWins = 0;
    short totalDrawTimes = 0;
    enWinner gameWinner;
    string finalWinnerName;
};

int readPositiveNumber(string message, int from, int to) {
    int number;

    do {
        cout<< message;
        cin >> number;
    } while (number>= to && number<= from);

    return number;
}

int generateRandomNumber(int from, int to) {
    return (rand() % (to-from +1)+ from);
}

void resetGame() {
    system("cls");
    system("color 0F");
}

string enumToStringWinner( enWinner winner ) {
    string winners[] = {"User", "Computer", "No Winner"};
    return winners[winner - 1];
}

string enumToStringGameChoice( enGameChoice GameChoice ) {
    string GameChoices[] = {"Rock", "Paper", "Scissors"};
    return GameChoices[GameChoice - 1];
}

enWinner getFinalWinner(FinalGameInfo finalGameInfo) {
        if (finalGameInfo.totalComputerWins > finalGameInfo.totalUserWins)
            return Computer;
        else if (finalGameInfo.totalComputerWins < finalGameInfo.totalUserWins)
            return User;
        else
        return NoWinner;
}

enWinner getRoundWinner(RoundInfo roundInfo) {

    if (roundInfo.userChoice == roundInfo.computerChoice) {
        return NoWinner;
    }

    switch (roundInfo.userChoice)
        {
        case(Rock):
            if (roundInfo.computerChoice == Paper)
                return Computer;
            break;
        case(Paper):
            if (roundInfo.computerChoice == Scissors)
                return Computer;
            break;
        case(Scissors):
            if (roundInfo.computerChoice == Rock)
                return Computer;
            break;
        }

    return enWinner::User;

}


void IncrmentScore(FinalGameInfo &finalGameInfo, RoundInfo roundInfo) {

    if ( roundInfo.roundWinner == enWinner::User) {
        finalGameInfo.totalUserWins++;
        system("color 20");
    }
    else if (roundInfo.roundWinner == enWinner::Computer) {
        finalGameInfo.totalComputerWins++;
        system("color 40");
        cout<< '\a';
    }
    else {
        finalGameInfo.totalDrawTimes++;
        system("color 60");
    }


}

void displayRoundInfo(RoundInfo roundInfo) {
    cout<< "_________________Round[" << roundInfo.roundNumber << "]_________________\n";
    cout<< "User Choice: " << enumToStringGameChoice(roundInfo.userChoice) << endl;
    cout<< "Computer Choice: " << enumToStringGameChoice(roundInfo.computerChoice) << endl;
    cout<< "Winner: [" << roundInfo.winnerName << "]\n";
    cout<< "__________________________________________\n\n";
}

string tabs(int numOfTabs) {
    string t = "";

    for (int i = 0; i< numOfTabs; i++)
        t+= '\t';

    return t;
}

void displayGameOver() {
    cout<< tabs(3) << "____________________________________________________\n";
    cout<< tabs(5) << "  ++Game Over++\n";
    cout<< tabs(3) << "____________________________________________________\n";
}

void displayGameStats(FinalGameInfo finalGameINfo) {
    displayGameOver();
    cout<< tabs(3) << "Player Wins     : "<< finalGameINfo.totalUserWins <<"\n";
    cout<< tabs(3) << "Computer Wins   : "<< finalGameINfo.totalComputerWins <<"\n";
    cout<< tabs(3) << "Draw Times      : "<< finalGameINfo.totalDrawTimes <<"\n";
    cout<< tabs(3) << "Final Winner    : ["<< finalGameINfo.finalWinnerName <<"] \n\n\n";
}

void playGame(short numOfRounds) {
    RoundInfo roundInfo;
    FinalGameInfo GameInfo;


    for (int i = 1; i<= numOfRounds; i++ ) {
        roundInfo.userChoice = (enGameChoice) readPositiveNumber("Your Choice? [1]Rock [2]Paper [3]Scissors:",1, 3);
        roundInfo.computerChoice = (enGameChoice) generateRandomNumber(1,3);
        roundInfo.roundWinner = getRoundWinner(roundInfo);
        roundInfo.winnerName = enumToStringWinner(roundInfo.roundWinner);
        IncrmentScore(GameInfo , roundInfo);
        roundInfo.roundNumber++;
        displayRoundInfo(roundInfo);
    }
    GameInfo.gameWinner = getFinalWinner(GameInfo);
    GameInfo.finalWinnerName = enumToStringWinner(GameInfo.gameWinner);
    displayGameStats(GameInfo);


}

void startGame() {
    short numOfRounds;

    char anotherRound = 'Y';
    do {
        resetGame();
        numOfRounds = readPositiveNumber("Enter The Number Of Rounds: ", 1 , 10);
        playGame(numOfRounds);

        cout<< "Do You Want To Play Another Game? [Y]Yes, [N]No:";
        cin >> anotherRound;

    } while (anotherRound == 'y' || anotherRound == 'Y');

}

int main() {
    srand((unsigned) time(NULL));
    startGame();

}