/*
* BIT1400
* Assignment 3 - Rock Paper Scissors
* Favour Diokpo 101021610
* 7/Feb/2017

*COMMENT:
* I used Xcode when programming becuase I have a MacBook that is why i have my main returning an int value, sorry for the inconvinence.
*/

#include <iostream>
using namespace std;

int playersChoice(int playerNumber);

int main() {
	cout << "--------Hello this is a Rock Paper Scissors Game--------" << endl;
	int winner[5];
	int player, playerNumber1 = 0, playerNumber2 = 0, l, player1Win = 0, player2Win = 0, tie = 1;


	for (int i = 0; i<5; i++) {
		cout << "\n---*This is game " << i + 1 << "*---" << endl;
		do {
			//loop/switch for inputing player choice into array
			for (l = 0; l<2; l++) {
				cout << "Are you player 1 or 2?\n";
				cin >> player;
				switch (player) {
				case 1:playerNumber1 = playersChoice(1);
					cout << "the number is " << playerNumber1 << endl;
					break;
				case 2:playerNumber2 = playersChoice(2);
					cout << "the number is " << playerNumber2 << endl;
					break;
				default:cout << "Error: the choice you have entered is incorrect\n"; break;
				}
			}
			if (playerNumber1 == playerNumber2) {
				tie = 0;
				cout << "\nPlayer 1 and player 2 tied so please try again\n";
			}
		} while (playerNumber1 == playerNumber2);

		//if statement to determine who wins each game.
		if ((playerNumber1 == 1) && (playerNumber2 == 2)) {
			cout << "--|player 2 wins|--" << endl;
			winner[i] = 2;
		}
		else if ((playerNumber1 == 1) && (playerNumber2 == 3)) {
			cout << "--|player 1 wins|--" << endl;
			winner[i] = 1;
		}

		else if ((playerNumber1 == 2) && (playerNumber2 == 1)) {
			cout << "--|player 1 wins|--" << endl;
			winner[i] = 1;
		}
		else if ((playerNumber1 == 2) && (playerNumber2 == 3)) {
			cout << "--|player 2 wins|--" << endl;
			winner[i] = 2;
		}

		else if ((playerNumber1 == 3) && (playerNumber2 == 2)) {
			cout << "--|player 1 wins|--" << endl;
			winner[i] = 1;
		}
		else if ((playerNumber1 == 3) && (playerNumber2 == 1)) {
			cout << "--|player 2 wins|--" << endl;
			winner[i] = 2;
		}
	}


	//for loop that goes through the winnr array and adds wins for each player.
	for (int m = 0; m<5; m++) {
		cout << "the winner of game " << m + 1 << " is player " << winner[m] << endl;
		if (winner[m] == 1) {
			player1Win++;
		}
		else
			player2Win++;
	}

	//if statement to find out who has the highest wins player 1 or 2.
	if (player1Win > player2Win) {
		cout << "The WINNER is Player 1" << endl;
	}
	else {
		cout << "the WINNER is Player 2" << endl;
	}


	return 0;
}



int playersChoice(int playerNumber) {
	int entry, a = 0;

	//display the players options
	cout << "You will need to select a choice to play\n 1 = Rock\n 2 = Paper\n 3 = Scissors\n";
	cin >> entry;

	//when the players entry is incorrect
	while ((entry < 1) || (entry > 3)) {
		cout << "The value you chose isn't an option, please try again\n";
		cin >> entry;
		a++;
	}

	return entry;
}
