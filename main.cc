/*
    OS project 1

    Johnathan Hocevar
    Edward Garmon
    Donovan Sip
*/

#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

// Reads a command from the user with arguments
bool read_command(char command[], char file_name[], int * n1, int * n2) {
    cout << "enter a command: ";
	cin >> command;

	// Check the command to see what we need to read in next
	if (strcmp(command, "openfs") == 0) {
		cin >> file_name;
	} else if (strcmp(command, "initfs") == 0) {
		cin >> *n1;
		cin >> *n2;
	}
}

int openfs() {

}

int initfs() {

}

int count_free() {
	
}

// Runs main loop of getting command from user and calling correct functions
int main(int argc, char * argv[]) {
	
	char command[10], file_name[100];		// char array for storing command and filename
	int n1, n2; 							// for reading the parameters to the initfs command
    int done = 0;							// Set to 1 when the program is exited.

    while (!done) { 
		// Read command from user, arguments file_name, n1, n2 may or may not be filled depending on command
	    read_command(command, file_name, &n1, &n2);

		// Check which command we need to execute
	    if (strcmp(command, "q") == 0) 
		    done = 1;

	    else if (strcmp(command, "openfs") == 0) {
			cout << "opening file " << file_name << endl;
		    // int fd = open(file_name, 2);
		
		    }
	    else if (strcmp(command, "initfs") == 0) {
            cout << "initializing filesystem with args: " << n1 << " " << n2 << endl;
	    }

		else if (strcmp(command, "count-free") == 0) {
			cout << "Counting free datablocks and number of i-nodes available" << endl;
		}
	}

	cout << "exiting program" << endl;

}
