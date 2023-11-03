#include <bits/stdc++.h>

using namespace std;
 
int main()
{
	system("cls");
	system("Color E0");
    cout << "\t\t\t\t**********************************************\n";
    cout << "\t\t\t\t*\tWelcome to GuessTheNumber Game!\t     *"<< endl;
    cout<<"\t\t\t\t*                                            *\n";
    cout<<"\t\t\t\t*\t\t-Created by Sanket Thawali   *\n";
    cout << "\t\t\t\t**********************************************\n";
    cout<<"\n\n\n\n";
    cout << "You have to guess a number between 1 and 100. You'll have limited choices based on the level you choose. Good Luck!"<< endl;
 
    while (true) {
        cout << "\nEnter the level: \n";
        cout << "1 For Easy!\t";
        cout << "2 For Medium!\t";
        cout << "3 For Difficult!\t";
        cout << "0 For Ending the Game!\n" << endl;
 
        
        int difficultyChoice;
        cout << "Enter the number: ";
        cin >> difficultyChoice;
 
        
        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int playerChoice;
        int count;
 
        
        if (difficultyChoice == 1) {
            cout << "\nYou have 10 choices for finding the secret number between 1 and 100.";
            int choicesLeft = 10;
            for (int i = 1; i <= 10; i++) {
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;
                    count++;
                
                if (playerChoice == secretNumber) {
                    cout << "Well played! You won "<< playerChoice<< " is the secret number And you guess it in "<<count<<" choices." << endl;
                    cout << "\t\t\t Thanks for playing...."<< endl;
                    cout << "Play the game again with us!!\n\n"<< endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice << " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is smaller than the number you have chosen"<< endl;
                    }
                    else {
                        cout << "The secret number is greater than the number you have chosen"<< endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "<< endl;
                    if (choicesLeft == 0) {
                        cout << "You couldn't find the secret number, it was "<< secretNumber<< ", You lose!!\n\n";
                        cout << "Play the game again to win!!!\n\n";
                    }
                }
            }
        }
 
        
        else if (difficultyChoice == 2) {
            cout << "\nYou have 7 choices for finding the secret number between 1 and 100.";
            int choicesLeft = 7;
            
            for (int i = 1; i <= 7; i++) {
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;
                  count++;
                if (playerChoice == secretNumber) {
                    cout << "Well played! You won, "<< playerChoice<< " is the secret number And you guess it in "<<count<<" choices." << endl;
                    cout << "\t\t\t Thanks for playing...."<< endl;
                    cout << "Play the game again with us!!\n\n"<< endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice<< " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is smaller than the number you have chosen"<< endl;
                    }
                    else {
                        cout << "The secret number is greater than the number you have chosen"<< endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "<< endl;
                    if (choicesLeft == 0) {
                        cout << "You couldn't find the secret number, it was "<< secretNumber< ", You lose!!\n\n";
                        cout << "Play the game again to win!!!\n\n";
                    }
                }
            }
        }
        else if (difficultyChoice == 3) {
            cout << "\nYou have 5 choices for finding the secret number between 1 and 100.";
            int choicesLeft = 5;
            
            for (int i = 1; i <= 5; i++) {
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;
                  count++;
                if (playerChoice == secretNumber) {
                    cout << "Well played! You won, "<< playerChoice<< " is the secret number And you guess it in "<<count<<" choices." << endl;
                    cout << "\t\t\t Thanks for playing...."<< endl;
                    cout << "Play the game again with us!!\n\n"<< endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice<< " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is smaller than the number you have chosen"<< endl;
                    }
                    else {
                        cout << "The secret number is greater than the number you have chosen"<< endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "<< endl;
                    if (choicesLeft == 0) {
                        cout << "You couldn't find the secret number, it was "<< secretNumber<< ", You lose!!\n\n";
                        cout << "Play the game again to win!!!\n\n";
                    }
                }
            }
        }
        
        else if (difficultyChoice == 0) {
        	cout<<"Wish you come back soon!!";
            exit(0);
        }
        else {
            cout << "Wrong choice, Enter valid choice to play the game! (0,1,2,3)"<< endl;
        }
    }
    return 0;
}
