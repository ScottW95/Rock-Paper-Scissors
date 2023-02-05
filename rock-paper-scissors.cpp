#include <iostream>
using namespace std;

//Creates function for restarting game
void restart_Game(){
    if (restart == "Y" || restart == "y"){
        continue;
    } else {
        cout << "Thanks for playing!";
        break;
    }

}

int main (){


    //Creates variable for the computer's choice and gives it a random selection
    srand(time(NULL));
    int computer = rand()%(3-1)+1;

    //Creates variable for the player's choice
    int player;    
    int restart;

    //Code for greeting the player

    cout << "Hello! Would you like to play a game of Rock, Paper, Scissors? \n";
    cout << "1.) Rock\n";
    cout << "2.) Paper\n";
    cout << "3.) Scissor\n";
    cout << "Please enter the number of your selection: \n";

    cin >> player;
    cout << player << endl;
    cout << computer << endl;

    //Code for deciding the winner

    if (player == 1 && computer == 1 ){
        cout << "Sorry! Both you and the computer chose Rock.  It's a tie!\n";
        cout << "Want to play again? Y/N";
        cin
    }





    return 0;
}