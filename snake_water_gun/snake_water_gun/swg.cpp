#include <iostream> 
#include <string>
#include <ctime>
#include <cstdlib> 
using namespace std;

int main() {
    string player;
    string opponent;
    int playerScore = 0;
    int opponentScore = 0;
    string swg[] = {"snake", "water", "gun"};

    
    srand((unsigned int) time(NULL)); 

    while (true) {
        cout << "Enter snake, water, or gun:";
        getline(cin, player);

        if (player != "snake" && player != "water" && player != "gun") {
            break;
        }

        opponent = swg[rand() % 3]; 
        cout << "Opponent chooses " << opponent << endl;

        if (player == opponent) {
            playerScore++;
            opponentScore++;
        }
        else if (player == "snake") {
            if (opponent == "water") playerScore++;
            else if (opponent == "gun") opponentScore++;
        }
        else if (player == "water") {
            if (opponent == "gun") playerScore++;
            else if (opponent == "snake") opponentScore++;
        }
        else if (player == "gun") {
            if (opponent == "water") playerScore++;
            else if (opponent == "snake") opponentScore++;
        }
        cout << "Player: " << playerScore << " Opponent: " << opponentScore << endl;    
    }

    cout << "Player: " << playerScore << " Opponent: " << opponentScore << endl; 
    if (playerScore > opponentScore) cout << "you  wons!" << endl;
    else if (playerScore < opponentScore) cout << "Opponent wins!" << endl;
    else cout << "Tie!" << endl;
}