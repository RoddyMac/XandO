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
void displayTable(vector<char> line1, vector<char> line2, vector<char> line3) {		//Displays the board as it is when the function is called

	for (int i = 0; i < line1.size();i++) {								//Iterates through each item of the vector and displays the value at each index
		cout << line1[i] << " ";		
	}

	cout << "\n";															//For display purposes

	for (int i = 0; i < line2.size(); i++) {
		cout << line2[i] << " ";
	}

	cout << "\n";

	for (int i = 0; i < line3.size();i++) {
		cout << line3[i] << " ";	
	}

	cout << "\n";

}

vector<char> resetLine(vector<char> line) {
	
	line.push_back('-');
	line.push_back('-');
	line.push_back('-');

	return line;
}

char getPlayerMove(char currentMove_x, char currentMove_y) {

	cout << "Please enter the column value that you want to mark on the board: ";
	cin >> currentMove_x;	
	cout << "Please enter the row value that you want to mark on the board: ";
	cin >> currentMove_y;
	
	//Adding validation that the inputs are within range
	
	if (currentMove_x != 'a' && currentMove_x != 'b' && currentMove_x != 'c') {
		cout << "That is not a valid answer, please enter a valid column: ";
		cin >> currentMove_x;
	}
	if (currentMove_y != 'a' && currentMove_y != 'b' && currentMove_y != 'c') {
		cout << "That is not a valid answer, please enter a valid row: ";
		cin >> currentMove_y;
	}	 

	return currentMove_x;
	return currentMove_y;
}

vector<char> playerMove(vector<char> line1, vector<char> line2, vector<char> line3, char currentMove_x, char currentMove_y, char playerSymbol) {

	//Write movement function here	
		if (currentMove_y == 'a') {             //Selects the appropriate array and finds the appropriate index to mark  
			if (currentMove_x == 'a') {         //Maybe find a better way to do this?
                line1[0] = playerSymbol;
			}
            if (currentMove_x == 'b') {
                line1[1] = playerSymbol;
            }
            if (currentMove_x == 'c') {
                line1[2] = playerSymbol;
            }
		}
		else if (currentMove_y == 'b') {
			if (currentMove_x == 'a') {
                line2[0] = playerSymbol;
			}
            if (currentMove_x == 'b') {
                line2[1] = playerSymbol;
            }
            if (currentMove_x == 'c') {
                line2[2] = playerSymbol;
            }
		}
		else if (currentMove_y == 'c') {
			if (currentMove_x == 'a') {
                line3[0] = playerSymbol;
			}
            if (currentMove_x == 'b') {
                line3[1] = playerSymbol;
            }
            if (currentMove_x == 'c') {
                line3[2] = playerSymbol;
            }
		}
	
	return line1;
	return line2;
	return line3;
}

int main() {
	
	setup();
	
	char currentMove_x;
	char currentMove_y;
    char player1;
    char player2;
    vector<char> line1;
	vector<char> line2;
	vector<char> line3;

	line1 = resetLine(line1);
	line2 = resetLine(line2);
	line3 = resetLine(line3);

	displayTable(line1, line2, line3);

}

