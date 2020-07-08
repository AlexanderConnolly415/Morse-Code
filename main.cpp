//Put your C++ code here
//Name: Alexander Connolly
//Date: 6/27/2020
//Source: Tutor Jack Davis suggested the following: Use ASCII characters to represent the alphabet and 0-9
//Source: He suggested altering certain endl positions when I was trying to match outputs with tests
//Source: He suggested using the variable 'done' to make the program determine whether or not to run the program again


#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

//morse code printing function - prints one character

//toPrint is the character being printed

void printCode(char toPrint){

    //convert character to upper case if character is lowercase, example: q becomes Q
    toPrint = toupper(toPrint);

    //ASCII for space
    if(toPrint == 32)
        cout << " / ";

    //letters A-Z in morse code

    if(toPrint == 'A')
        cout << ".-";

    if(toPrint == 'B')
        cout << "-...";

    if(toPrint == 'C')
        cout << "-.-.";

    if(toPrint == 'D')
        cout << "-..";

    if(toPrint == 'E')
        cout << ".";

    if(toPrint == 'F')
        cout << "..-.";

    if(toPrint == 'G')
        cout << "--.";

    if(toPrint == 'H')
        cout << "....";

    if(toPrint == 'I')
        cout << "..";

    if(toPrint == 'J')
        cout << ".---";

    if(toPrint == 'K')
        cout << "-.-";

    if(toPrint == 'L')
        cout << ".-..";

    if(toPrint == 'M')
        cout << "--";

    if(toPrint == 'N')
        cout << "-.";

    if(toPrint == 'O')
        cout << "---";

    if(toPrint == 'P')
        cout << ".--.";

    if(toPrint == 'Q')
        cout << "--.-";

    if(toPrint == 'R')
        cout << ".-.";

    if(toPrint == 'S')
        cout << "...";

    if(toPrint == 'T')
        cout << "-";

    if(toPrint == 'U')
        cout << "..-";

    if(toPrint == 'V')
        cout << "...-";

    if(toPrint == 'W')
        cout << ".--";

    if(toPrint == 'X')
        cout << "-..-";

    if(toPrint == 'Y')
        cout << "-.--";

    if(toPrint == 'Z')
        cout << "--..";

    //numbers in morse code

    if(toPrint == '0')
        cout << "-----";

    if(toPrint == '1')
        cout << ".----";

    if(toPrint == '2')
        cout << "..---";

    if(toPrint == '3')
        cout << "...--";

    if(toPrint == '4')
        cout << "....-";

    if(toPrint == '5')
        cout << ".....";

    if(toPrint == '6')
        cout << "-....";

    if(toPrint == '7')
        cout << "--...";

    if(toPrint == '8')
        cout << "---..";

    if(toPrint == '9')
        cout << "----.";

    //punctuation in morse code

    if(toPrint == '.')
        cout << ".-.-.-";

    if(toPrint == ',')
        cout << "--..--";

    if(toPrint == ':')
        cout << "---...";

    if(toPrint == '?')
        cout << "..--..";

    if(toPrint == 39)
        cout << ".----.";

    if(toPrint == '-')
        cout << "-....-";

    if(toPrint == '/')
        cout << "-..-.";

    if(toPrint == 34)
        cout << ".-..-.";

    if(toPrint == '@')
        cout << ".--.-.";

}

//void function takes in the user input, for loop outputs the sentence inputted by the user

void printString(string userString){
    for(unsigned int i = 0;i<=userString.length()-1;i++){
        char userChar = userString.at(i);
        printCode(userChar);
    }
}

//void function that takes in our initials as a string to print them in morse code in the next step

void printInitials(string userString){
    for(unsigned int i = 0;i<=userString.length()-1;i=i+2){

        //at() function extracts one character from the string

        char userChar1 = userString.at(i);
        char userChar2 = userString.at(i+1);
        printCode(userChar1);
        cout << " ";
        printCode(userChar2);
        if(i<userString.length()-3)

            //adding the / mark since I'd like to include my tutor's initials

            cout << " / ";
    }
}

//printSentence prints the string inputted by the user

void printSentence(string userString){

    for(unsigned int i = 0;i<=userString.length()-1;i++){

        //at() function extracts one character from the string

        char userChar1 = userString.at(i);
        printCode(userChar1);
        cout << " ";
    }

}

int main(){

    //character that the user inputs
    char userChoice;

    int done = 0;

    //check if its done
    while(done == 0){

        cout << endl << endl;

        cout << "Menu" << endl;

        cout << "A - Alphabet" << endl;

        cout << "I - Initials" << endl;

        cout << "N - Numbers" << endl;

        cout << "P - Punctuations" << endl;

        cout << "S - User Sentence" << endl;

        cout << "Q - Quit" << endl;

        //takes the users command and inserts it into userChoice

        cout << "Enter command: ";
        cin >> userChoice;

        //converts user choice to upper case if userChoice is lower case
        userChoice = toupper(userChoice);

        //if user chooses A

        if ( userChoice == 'A' ){

            cout << "Here are the letters of the alphabet (A-Z) in morse code: " << endl;

            for(int i = 65;i<=90;i++){
                printCode(i);
                cout << " ";
            }

        }

            //if user chooses I

        else if (userChoice == 'I') {

            cout << "Here are the team member initials in morse code: " << endl;

            string ourInitials = "ACJD";

            printInitials(ourInitials);

        }

            //if user chooses N

        else if (userChoice == 'N') {

            cout << "Here are the numbers (0123456789) in morse code: " << endl;
            //ASCII characters 0-9 are represented by 47-56, stops at 57
            for(int i = 47; i<=57;i++){
                printCode(i);
                cout << " ";
            }

        }

            //if user chooses P

        else if (userChoice == 'P') {

            cout << "Here are the punctuation marks (.,:?'-/\"@) in morse code : ";

            printSentence(".,:?'-/\"@");

        }

            //if user chooses S

        else if (userChoice == 'S') {

            cout << "Please enter a sentence: " << endl;

            string yourSentence;

            getline(cin,yourSentence);
            getline(cin,yourSentence);

            cout << "Here is your sentence in your morse code: ";

            printSentence(yourSentence);
        }

            //When the user wants to quit

        else if (userChoice == 'Q') {

            cout << "Program Done!" << endl;
            done = 1;
        }
    }
    return 0;
}
