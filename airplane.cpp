/**
* @brief Assignment 8
* @name Randy Randall
*/

#include "airplane.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;



void emptyChart(char grid[ROWS][COLS]){
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            grid[i][j] = '_';
        }

    }

 }

void loadTestChart(char grid[ROWS][COLS], string filename){
    //read in file
    ifstream inFile;
    inFile.open(filename);


    //read into the spots
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
           inFile >> grid[i][j];
        }
        if (inFile.fail())
           break;
    }
    inFile.close();
}


void printSeatingChart(const char grid[ROWS][COLS]){
    // print out the side column
    cout << left << setw(6) << "Seat ";
    for(int i=0; i<COLS; i++)
        cout << left << " " << (char)(i + 'A');
       cout << endl;

    //print airplane seats
    for(int i = 0; i < ROWS; i++)
    {
        //print row number
        printf("Row %2d", (i+1));

        //print empty seats
        for(int j = 0; j < COLS; j++){
            cout << " " << grid[i][j];
        }
        cout << endl;
    }
}


int getEmptyCount(const char grid[ROWS][COLS]){
    int total = 0;
    for(int i=0; i < ROWS; i++)
    {
        for(int j=0; j < COLS; j++){//if _ then add to total
            if(grid[i][j] == '_')
                total++;
        }

    }
    return total;
}


int getWindowCount(const char grid[ROWS][COLS]){
    int windowSeats = 0;

        for(int i = 0; i < ROWS; i++){
            if(grid[i][0] == '_')
                windowSeats++;
        }
        for(int i = 0; i < ROWS; i++){
            if(grid[i][COLS-1] == '_')
                windowSeats++;
        }


    return windowSeats;

}


bool fillSeat(char grid[ROWS][COLS], int row, char seat){
    bool taken = false;
    //char to integer conversion
    int planeColumn = toupper(seat-65);

    if(grid[--row][planeColumn] == '_'){
        taken = true;
            grid[row][planeColumn] = 'X';
    }
    return taken;
}

string findAdjacentSeats(const char grid[ROWS][COLS], int numSeats){

    for(int i=0; i < ROWS; i++)
    {
        int amountOpen = 0;
        string found = "";
        char letter;
        for(int j=0; j < COLS; j++){
            if(grid[i][j] == '_'){
                amountOpen++;
                found += to_string(i+1);//
                letter = j + 65;
                found += letter;
                found += " ";

            }
             else
            {
               amountOpen = 0;
               found = "";
            }
            if(amountOpen == numSeats)
                return found;//breaks out

        }


    }
    return "";

}


