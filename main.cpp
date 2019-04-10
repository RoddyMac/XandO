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

char playerMove(char currentMove_x, char currentMove_y) {

	cout << "Please enter the column value that you want to mark on the board: ";
	cin >> currentMove_x;	
	cout << "Please enter the row value that you want to mark on the board: ";
	cin >> currentMove_y;
	
	//Adding validation that the inputs are within range COME BACK TO THIS SECTION
	
	if (currentMove_x != 'a' && currentMove_x != 'b' && currentMove_x != 'c') {
		cout << "That is not a valid answer, please enter a valid column: ";
		cin >> currentMove_x;
	}
	if (currentMove_y != 'a' && currentMove_y != 'b' && currentMove_y != 'c') {
		cout << "That is not a valid answer, please enter a valid row: ";
		cin >> currentMove_y;
	}	 

	//Once movement is written write move validation here

	return currentMove_x;
	return currentMove_y;
}

int main() {
	setup();
	
	char currentMove_x;
	char currentMove_y;
	vector<char> line1;
	vector<char> line2;
	vector<char> line3;

	line1 = resetLine(line1);
	line2 = resetLine(line2);
	line3 = resetLine(line3);

	displayTable(line1, line2, line3);
	
	playerMove(currentMove_x, currentMove_y);

}

