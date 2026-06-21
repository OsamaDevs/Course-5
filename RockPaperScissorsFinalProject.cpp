
//
// Created by osama on 6/16/2026.
//
#include <iostream>
#include <string_view>
using namespace std;

enum enRPS { Rock , Paper , Scissors};

struct player {
   string name;
   enRPS state;
   int score = 0;
};

constexpr std::string_view enRPS_to_string(enRPS rps) {
    switch (rps) {
        case Rock:     return "Rock";
        case Paper:    return "Paper";
        case Scissors: return "Scissors";
        default:       return "Unknown";
    }
}

int readPositiveNumber(string message) {
   int number = 0;

   do {
       cout<< message << " ";
       cin>> number;
   } while (number<0);

   return number;
}

int genrateRandomComputerState() {
   return ( (enRPS) rand()  % 3 );
}

string getFinalWinner(player user, player computer){

    if(user.score > computer.score)
        return user.name;
    else if (user.score < computer.score)
        return computer.name;
    else
        return "No Winner";

}

string compare(player &user, player &computer, int &drawCount)
{
        if (user.state == computer.state) {
            system("color 60");
            drawCount++;
            return "Draw";
        }

        // Mathematical formula to determine the winner
        int result = (user.state - computer.state + 3) % 3;

        if (result == 1) {
            system("color 20");
            user.score++;
            return user.name;
        } else {
            system("color 40");
            computer.score++;
            return computer.name;
        }

}



void displayFinalGameResults(int numOfGames, player user, player computer, int drawTimes, string finalWinner) {
   cout<< "\t\t\t" << "____________________________________________________\n";
   cout<< "\t\t\t\t\t  " << "++Game Over++\n";
   cout<< "\t\t\t" << "____________________________________________________\n";
   cout<< "\t\t\t" << "Player Wins     : "<< user.score <<"\n";
   cout<< "\t\t\t" << "Computer Wins   : "<< computer.score <<"\n";
   cout<< "\t\t\t" << "Draw Times      : "<< drawTimes <<"\n";
   cout<< "\t\t\t" << "Final Winner    : ["<< finalWinner <<"] \n\n\n";

}

void displayOneGameResult(int roundNumber, string winnerName , player user, player computer) {
   cout<< "_________________Round[" << roundNumber << "]_________________\n";
   cout<< "User Choice: " << enRPS_to_string(user.state) << endl;
   cout<< "Computer Choice: " << enRPS_to_string(computer.state) << endl;
   cout<< "Winner: [" << winnerName << "]\n";
   cout<< "__________________________________________\n\n";
}



void play(int numOfGames, player &user, player &computer, int &drawCount) {

   for (int i = 0; i< numOfGames; i++) {
       user.state = (enRPS) readPositiveNumber("Your Choice? [0]Rock [1]Paper [2]Scissors: ");
       computer.state = (enRPS) genrateRandomComputerState();

       string whoWon = compare( user, computer, drawCount);
       displayOneGameResult(i+1 , whoWon , user, computer);

       if(i == numOfGames-1){
       string finalWinner = getFinalWinner(user, computer);
       displayFinalGameResults(i+1, user, computer, drawCount, finalWinner);

       }
   }


}

void resetGame(player &user, player &computer) {
   system("cls");
   system("color 07");
   user.score  = 0;
   computer.score = 0;
}

int main() {
   srand((unsigned) time(NULL));

   int numOfGames= 0 , drawCount = 0;
   string choice = "";
   player user , computer;

   user.name = "User";
   computer.name = "Computer";


   do {
       numOfGames = readPositiveNumber("Enter The Number Of Rounds You Want To Play: ");
       play(numOfGames, user, computer, drawCount);
       cout<< "Do You Want To Continue? [Y]Yes, [N]No: ";
       cin>> choice;
       if (choice == "y" || choice == "Y")
       resetGame(user, computer);
   } while (choice == "y" || choice == "Y");


}
