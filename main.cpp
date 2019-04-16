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
void displayTable(vector<int> line1, vector<int> line2, vector<int> line3) {		//Displays the board as it is when the function is called
    
    cout << "  1 2 3\n";
    cout << "1 ";
	for (int i = 0; i < line1.size();i++) {								//Iterates through each item of the vector and displays the value at each index
		cout << line1[i] << " ";		
	}

	cout << "\n";															//For display purposes
    
    cout << "2 ";
	for (int i = 0; i < line2.size(); i++) {
		cout << line2[i] << " ";
	}

	cout << "\n";

    cout << "3 ";
	for (int i = 0; i < line3.size();i++) {
		cout << line3[i] << " ";	
	}

	cout << "\n";

}

vector<int> resetLine(vector<int> line) {
	
	line.push_back(1);
	line.push_back(1);
	line.push_back(1);

	return line;
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

vector<int> playerMove(vector<int> line1, vector<int> line2, vector<int> line3, const vector<int> currentMove, int playerSymbol) {

	//Write movement function here	
		if (currentMove[1] == 1) {             //Selects the appropriate array and finds the appropriate index to mark  
			if (currentMove[0] == 1) {         //Maybe find a better way to do this?
                line1[0] = playerSymbol;
			}
            if (currentMove[0] == 2) {
                line1[1] = playerSymbol;
            }
            if (currentMove[0] == 3) {
                line1[2] = playerSymbol;
            }
		}
		else if (currentMove[1] == 2) {
			if (currentMove[0] == 1) {
                line2[0] = playerSymbol;
			}
            if (currentMove[0] == 2) {
                line2[1] = playerSymbol;
            }
            if (currentMove[0] == 3) {
                line2[2] = playerSymbol;
            }
		}
		else if (currentMove[1] == 3) {
			if (currentMove[0] == 1) {
                line3[0] = playerSymbol;
			}
            if (currentMove[0] == 2) {
                line3[1] = playerSymbol;
            }
            if (currentMove[0] == 3) {
                line3[2] = playerSymbol;
            }
		}
	
	return line1;
	return line2;
	return line3;
}

int main() {
	
	setup();
	
	vector<int> currentMove;
    int player1 = 2;
    int player2 = 0;
    int winCondition;
    vector<int> line1;
	vector<int> line2;
	vector<int> line3;

	line1 = resetLine(line1);
	line2 = resetLine(line2);
	line3 = resetLine(line3);

	displayTable(line1, line2, line3);
    getPlayerMove(currentMove);
    cout << "Main loop\n";
    
    for (int i = 0; i < currentMove.size(); i++) {
        cout << currentMove[i] << "\n";
    }

    playerMove(line1, line2, line3, currentMove, player1);
    displayTable(line1, line2, line3);
    //Main game loop
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

