/*
 * BIT1400
 * Assignment 3 - Rock Paper Scissors
 * This program provides 3 types of vacation packages for winter break.
 * Favour Diokpo 101021610
 * 7/Feb/2017
 
 Build your program slowly.
 You will need multiple loops
 
 start by displaying the player’s choices.
 Get their input.
 Check if the input is correct.
 Make a function to contain this functionality.
 Call your function for each player, and determine who wins.
 Adjust for ties.
 Display the winner.
 Then create multiple games using a loop.
 Then determine the overall winner.
 
 
 */

#include <iostream>
using namespace std;

int playerChoice(int playerNumber);

int main(){
    cout<<"--------Hello this is a Rock Paper Scissors Game--------"<<endl;
    int winner[5];
    int player, playerNumber1 = 0, playerNumber2 = 0, l, wins;
    
    for(int i=0; i<5;i++){
        cout<<"\n---*This is game "<<i+1<<"*---"<<endl;
        //loop/switch for inputing player choice into array
        for(l=0; l<2;l++ ){
            cout<<"Are you player 1 or 2?\n";
            cin>>player;
            switch (player) {
                case 1:playerNumber1 = playerChoice(1);
                    cout<<"the number is "<<playerNumber1<<endl;
                    break;
                case 2:playerNumber2 = playerChoice(2);
                    cout<<"the number is "<<playerNumber2<<endl;
                    break;
                default:cout<<"Error: the choice you have entered is incorrect\n";break;
            }
            }
        //if statement to determine who wins.
        if ((playerNumber1 == 1) && (playerNumber2 == 2)){
            cout<<"--|player 2 wins|--"<< endl;
            winner[i]=2;
        }
        else if((playerNumber1 == 1) && (playerNumber2 == 3)){
            cout<<"--|player 1 wins|--"<< endl;
            winner[i]=1;
        }
        else  if ((playerNumber1 == 1) && (playerNumber2 == 1)){
            cout<<"--|tie|--"<< endl;
            winner[i]=0;
            
        }
        else if ((playerNumber1 == 2) && (playerNumber2 == 1)){
            cout<<"--|player 1 wins|--"<< endl;
            winner[i]=1;
        }
        else if((playerNumber1 == 2) && (playerNumber2 == 3)){
            cout<<"--|player 2 wins|--"<< endl;
            winner[i]=2;
        }
        else  if ((playerNumber1 == 2) && (playerNumber2 == 2)){
            cout<<"--|tie|--"<< endl;
            winner[i]=0;
        }
        
        else if ((playerNumber1 == 3) && (playerNumber2 == 2)){
            cout<<"--|player 1 wins|--"<< endl;
            winner[i]=1;
        }
        else if((playerNumber1 == 3) && (playerNumber2 == 1)){
            cout<<"--|player 2 wins|--"<< endl;
            winner[i]=2;
        }
        else  if ((playerNumber1 == 3) && (playerNumber2 == 3)){
            cout<<"--|tie|--"<< endl;
            winner[i]=0;
        }
    }

    for(int m=0;m<5;m++){
        cout<<winner[m]<<endl;
    }
    
    
    return 0;
}



int playerChoice(int playerNumber){
    int entry, a;
    
    //display the players options
    cout<<"You will need to select a choice to play\n 1 = Rock\n 2 = Paper\n 3 = Scissors\n";
    cin>>entry;
    
    //when the players entry is incorrect
    while ((entry < 1) || (entry > 3)) {
        cout<<"The value you chose isn't an option, please try again\n";
        cin>>entry;
        a++;
    }
    
    return entry;
}
