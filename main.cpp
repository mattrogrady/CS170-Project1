#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include "algorithms.h"

using namespace std;

int main() {
  // USER INPUT PROMPT
  cout << "Welcome to 862172324 / 862180430 8 puzzle solver." << endl;
  cout << "Type '1' to use a default puzzle, or '2' to enter your own puzzle." << endl;
  int puzzleType = 0;
  cin >> puzzleType;
  cout << endl;

  vector<int> startPuzzle;
  startPuzzle.resize(9);
  if (puzzleType == 2) {
    cout << "Enter your own puzzle, use a zero to represent the blank" << endl;
    cout << "Enter the first row, use space or tabs between numbers" << endl;
    cin >> startPuzzle.at(0) >> startPuzzle.at(1) >> startPuzzle.at(2);
    cout << "Enter the second row, use space or tabs between numbers" << endl;
    cin >> startPuzzle.at(3) >> startPuzzle.at(4) >> startPuzzle.at(5);
    cout << "Enter the third row, use space or tabs between numbers" << endl;
    cin >> startPuzzle.at(6) >> startPuzzle.at(7) >> startPuzzle.at(8);
    cout << endl;
  }
  else {
    // Create random default puzzle, for now we will use the same one every time
    // 1 2 3      1 2 3      1 2 3
    // 4 0 5  ->  4 5 0  ->  4 5 6
    // 7 8 6      7 8 6      7 8 0
    startPuzzle.at(0) = 1;
    startPuzzle.at(1) = 2;
    startPuzzle.at(2) = 3;
    startPuzzle.at(3) = 4;
    startPuzzle.at(4) = 0;
    startPuzzle.at(5) = 5;
    startPuzzle.at(6) = 7;
    startPuzzle.at(7) = 8;
    startPuzzle.at(8) = 6;
  }

  cout << "Enter your choice of algorithm: " << endl;
  cout << "(1) Uniform Cost Search" << endl;
  cout << "(2) A* with the Misplaced Tile heuristic" << endl;
  cout << "(3) A* with the Euclidean distance heuristic" << endl;
  int algChoice = 0;
  cin >> algChoice;
  cout << endl;
  // END USER INPUT PROMPT
  // We now have a puzzle stored in vector startPuzzle and algorithm choice in algChoice

  // Convert 9x1 startPuzzle to 3x3 vector puzzle
  vector < vector<int> > puzzle(3);
  int count = 0;
  for (unsigned i = 0; i < 3; ++i) {
    for (unsigned j = 0; j < 3; ++j) {
      puzzle.at(i).push_back(startPuzzle.at(count));
      count++;
    }
  }

  algorithms alg;
  if (algChoice == 1) {
    alg.astar(puzzle, algChoice);
  }
  else if (algChoice == 2) {
    alg.astar(puzzle, algChoice);
  }
  else { // algChoice == 3
    alg.astar(puzzle, algChoice);
  }

  return 0;
}