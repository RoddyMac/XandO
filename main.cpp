#include <iostream>
#include <vector>
using namespace std;

void setup() {																	//Displays the welcome message 
	cout << "\n";
	cout << "\n";	
	cout << "======================\n";
	cout << "WELCOME TO X AND 0'S\n";
	cout << "======================\n";	
	cout << "\n";
	cout << "\n";	

}
void displayTable(int gameTable[3][3]) {		//Displays the board as it is when the function is called
    
    for (int i = 0; i < 3; i++) {               //Interates through all the x values
        for (int j = 0; j < 3; j++) {
            cout << gameTable[i][j] << " ";
        }
        cout << "\n";
    }
}

int resetTable(int gameTable[3][3]) {
	
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            gameTable[i][j] = 1;
        }
    }   
    return gameTable[3][3];
}

vector<int> getPlayerMove(vector<int> &currentMove) {
    
    currentMove.push_back(0);
    currentMove.push_back(0);

	cout << "Please enter the column value that you want to mark on the board: ";
	cin >> currentMove[0];
	cout << "Please enter the row value that you want to mark on the board: ";
	cin >> currentMove[1];

	//Adding validation that the inputs are within range
	
	if (currentMove[0] != 1 && currentMove[0] != 2 && currentMove[0] != 3) {
		cout << "That is not a valid answer, please enter a valid column: ";
		cin >> currentMove[0];
	}
	if (currentMove[1] != 1 && currentMove[1] != 2 && currentMove[1] != 3) {
		cout << "That is not a valid answer, please enter a valid row: ";
		cin >> currentMove[1];
	}	 

	return currentMove;
}

int playerMove(int gameTable[3][3], const vector<int> currentMove, int playerSymbol) {

	//Write movement function here	
    if (currentMove[0] == 1) {
        if (currentMove[1] == 1) {
            gameTable[0][0] = playerSymbol;
        }
        else if (currentMove[1] == 2) {
            gameTable[0][1] = playerSymbol;
        }
        else if (currentMove[1] == 3) {
            gameTable[0][2] = playerSymbol;
        }
    }
    else if (currentMove[0] == 2) {
        if (currentMove[1] == 1) {
            gameTable[1][0] = playerSymbol;
        }
        else if (currentMove[1] == 2) {
            gameTable[1][1] = playerSymbol;
        }
        else if (currentMove[1] == 3) {
            gameTable[1][2] = playerSymbol;
        }
    }
    else if (currentMove[0] == 3) {
        if (currentMove[1] == 1) {
            gameTable[2][0] = playerSymbol;
        }
        else if (currentMove[1] == 2) {
            gameTable[2][1] = playerSymbol;
        }
        else if (currentMove[1] == 3) {
            gameTable[2][2] = playerSymbol;
        }
    }

    return gameTable[3][3];
}

int main() {
	
	setup();
	
	vector<int> currentMove;
    int player1 = 2;
    int player2 = 0;
    int winCondition = 0;

    int gameTable [3][3] = {
     {1, 1, 1},
     {1, 1, 1},
     {1, 1, 1}
    };


    resetTable(gameTable);
	displayTable(gameTable);

    //Main game loop

    do {

        //Player1
        getPlayerMove(currentMove);
        //Move Validation
        playerMove(gameTable, currentMove, player1);
        displayTable(gameTable);
        //Implement Win detection algorithm here

    } while (winCondition == 0);
/*
    do {

        //Player1
        getPlayerMove(currentMove[0], currentMove[1]);
        //DO MOVE VALIDATION
        playerMove(line1, line2, line3, currentMove[0], currentMove[1], player1);
        displayTable(line1, line2, line3);        
        
        //Player2
        getPlayerMove(currentMove[0], currentMove[1]);
        //DO MOVE VALIDATION
        playerMove(line1, line2, line3, currentMove[0], currentMove[1], player2);
        displayTable(line1, line2, line3);        

    }while (winCondition == 0);
*/
}

