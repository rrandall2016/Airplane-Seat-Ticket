/**
* @brief Assignment 8
* @name Randy Randall
*/

#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

const int ROWS = 12;
const int COLS = 6;

/**
 * @brief  This fills an empty array
 * @param  Multidimiensional Array
 * @return void
 *
 */
void emptyChart(char grid[ROWS][COLS]);

/**
 * @brief  Reads in doucement
 * @param  Multidimiensional Array, file name
 * @return void
 *
 */
void loadTestChart(char grid[ROWS][COLS], string filename);

/**
 * @brief  Prints out the new seating chart
 * @param  Multidimiensional Array
 * @return void
 *
 */
void printSeatingChart(const char grid[ROWS][COLS]);

/**
 * @brief  Counts how many empty seats there are
 * @param  Multidimiensional Array
 * @return amount of empty seats as an integer
 *
 */
int getEmptyCount(const char grid[ROWS][COLS]);

/**
 * @brief  Counts how many seats are in column 0, and last
 * @param  Multidimiensional Array
 * @return amount of window seats as an integer
 *
 */
int getWindowCount(const char grid[ROWS][COLS]);

/**
 * @brief  Tests if a seat is open, if so, changes it to taken
 * @param  Multidimiensional Array, checks the row and which seat
 * @return boolean value
 *
 */
bool fillSeat(char grid[ROWS][COLS], int row, char seat);

/**
 * @brief  Looks for multiple seats open in a row
 * @param  Multidimiensional Array, number of seats in a row needed
 * @return where the seats are as string
 *
 */
string findAdjacentSeats(const char grid[ROWS][COLS], int numSeats);




#endif // AIRPLANE_H
