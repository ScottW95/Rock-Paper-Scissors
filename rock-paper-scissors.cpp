#include <iostream>
using namespace std;

int main (){


    //Creates variable for the computer's choice and gives it a random selection
    srand(time(NULL));
    int computer = rand()%(3-1)+1;

    //Creates variable for the player's choice and score
    int player;  
    string restart;
    int p_score = 0;
    int c_score = 0;

    //Code for deciding the winner
    do { 


        //Code for greeting the player
        cout << "Hello! Welcome to my game of Rock, Paper, Scissors!\n";

        cout << "1.) Rock\n";
        cout << "2.) Paper\n";
        cout << "3.) Scissor\n";
        cout << "Please enter the number of your selection: \n";
        cin >> player;

            if (player == 1 && computer == 1 ){
                cout << "Sorry! Both you and the computer chose Rock.  It's a tie!\n";
                cout << "Your score is: " << p_score << ":" << c_score << endl;
                cout << "Want to play again? Y/N";
                cin >> restart;
            } else if (player == 1 && computer ==2){
                cout << "Sorry! The computer chose paper and you lost!\n";
                c_score = (c_score + 1);
                cout << "Your score is: " << p_score << ":" << c_score << endl;
                cout << "Want to play again? Y/N \n";
                cin >> restart;
            } else if (player == 1 && computer == 3){
                cout << "Congrats! The computer chose scissor and you won!\n";
                p_score = (p_score + 1);
                cout << "Your score is: " << p_score << ":" << c_score << endl;
                cout << "Want to play again? Y/N\n";
                cin >> restart;
            } else if (player == 2 && computer == 2 ){
                cout << "Sorry! Both you and the computer chose Rock.  It's a tie!\n";
                cout << "Your score is: " << p_score << ":" << c_score << endl;
                cout << "Want to play again? Y/N";
                cin >> restart;
            } else if (player == 2 && computer == 3){
                cout << "Sorry! The computer chose scissor and you lost!\n";
                c_score = (c_score + 1);
                cout << "Your score is: " << p_score << ":" << c_score << endl;
                cout << "Want to play again? Y/N \n";
                cin >> restart;
            } else if (player == 2 && computer == 1){
                cout << "Congrats! The computer chose rock and you won!\n";
                p_score = (p_score + 1);
                cout << "Your score is: " << p_score << ":" << c_score << endl;
                cout << "Want to play again? Y/N \n";
                cin >> restart;
            }  else if (player == 3 && computer == 3){
                cout << "Sorry! Both you and the computer chose Rock.  It's a tie!\n";
                cout << "Your score is: " << p_score << ":" << c_score << endl;
                cout << "Want to play again? Y/N";
                cin >> restart;
            } else if (player == 3 && computer == 1){
                cout << "Sorry! The computer chose rock and you lost!\n";
                c_score = (c_score + 1);
                cout << "Your score is: " << p_score << ":" << c_score << endl;
                cout << "Want to play again? Y/N \n";
                cin >> restart;
            } else if (player == 3 && computer == 2){
                cout << "Congrats! The computer chose paper and you won!\n";
                p_score = (p_score + 1);
                cout << "Your score is: " << p_score << ":" << c_score << endl;
                cout << "Want to play again? Y/N \n";
                cin >> restart;
            } 

    } while (restart != "n" || restart != "N");





    return 0;
}