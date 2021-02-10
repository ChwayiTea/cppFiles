#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string line;
    //create an output stream to write to file
    //append the new line to the end of the file

    ofstream myFileIn ("input.txt", ios::app);
    if (myFileIn.is_open()){
        myFileIn << "\nI am adding my first line.\n";
        myFileIn << "I am adding another line.\n";
        myFileIn.close();
    }
    else cout <<"Unable to open file for writing";

    //create an input stream to read file
    ifstream myFileOut ("input.txt");
    //during the creation of ifstream the file is open

    if (myFileOut.is_open()){
        while (getline(myFileOut,line)){
            cout << line <<'\n';
        }
    }
    else cout << "Unable to open file for reading";
    return 0;
}
