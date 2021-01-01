/**
* @brief Assignment 8
* @name Randy Randall
*/

#include <iostream>
#include "airplane.h"
#include <iomanip>
using namespace std;


int main(){
    //Declare Array
    char grid[ROWS][COLS];

    //Fill Array Test
    emptyChart(grid);

    //Read file
    loadTestChart(grid, "Seats.txt");

    //Print New Chart
    printSeatingChart(grid);

    //Number Empty Seats
    cout << "Empty seats: " << getEmptyCount(grid) << endl;

    //Number Empty Window Seats
    int windows = getWindowCount(grid);
    cout << windows << endl;

//    //testing fillSeat Function
//    if(fillSeat(grid,1,'A') == false){
//        cout << "taken";
//    }

    //Testing Adjacent Seats
    cout << findAdjacentSeats(grid, 4);




    return 0;

}

