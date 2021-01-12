/*
Given an array of integers, return a new array with each value doubled.

For example:

[1, 2, 3] --> [2, 4, 6]

For the beginner, try to use the map method - it comes in very handy quite a lot so is a good one to know.
*/
#include <vector>
#include <iostream>
using namespace std; 

vector<int> maps(vector<int> values) {
  for (int i = 0 ; i <values.size() ; i++) {
      values[i] += values[i];
      cout << values.at(i) << endl;
  }
  
  return values ; 
}

int main(){
    vector<int> values = {2, 4, 5};
    maps(values);

    return 0;
}

// DUPLICATE, but also try by myself