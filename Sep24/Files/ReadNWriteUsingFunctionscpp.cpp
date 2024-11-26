#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void saveAlbum();
void displayAlbum();
int main() {
    int menuOption = 0;
    while (menuOption != 3) {
        cout << "1. Enter Album Info" << endl;
        cout << "2. Display Album Info" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter menu option: ";
        cin >> menuOption;

        cin.ignore(); // Clear input buffer

        if (menuOption == 1)
            saveAlbum();
        else if (menuOption == 2)
            displayAlbum();
        else if (menuOption != 3)
            cout << "Invalid option. Please try again." << endl;
    }
    return 0;
}

void saveAlbum() {
    string albumName = "";
    string artistName = "";

    ofstream outfile("albums.txt", ios::app); // Open file in append mode
    if (outfile.is_open()) {
        cout << "Enter Album Name: (-1 to stop): ";
        getline(cin, albumName); // Read album name

        while (albumName != "-1") {
            cout << "Enter Artist Name: ";
            getline(cin, artistName);

            // Write to file
            outfile << albumName << '#' << artistName << endl;

            // Ask for the next album
            cout << "Enter Album Name: (-1 to stop): ";
            getline(cin, albumName);
        }

        outfile.close(); // Close file
    }
    else {
        cout << "File cannot be opened." << endl;
    }
}

void displayAlbum() {
    string albumName = "";
    string artistName = "";

    ifstream infile("albums.txt"); 
    if (infile.is_open()) {
        // Read and display albums
        while (getline(infile, albumName, '#') && getline(infile, artistName)) {
            cout << "Album: " << albumName << ", Artist: " << artistName << endl;
        }
        infile.close(); 
    }
    else {
        cout << "Cannot open file." << endl;
    }
}
