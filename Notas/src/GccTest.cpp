//============================================================================
// Name        : GccTest.cpp
// Author      : Jorge
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <algorithm>
#include <array>
#include <chrono>
#include <iostream>
#include <random>

using namespace std;

const size_t N = 10;
void print_array(const array<int, N>& input);
void fill_array(array<int, N>& target);
void shuffle_array(array<int, N>& input);
//Three ways of codding insertion sort
void insertion_sort(array<int, N>& input);

int main() {
  //Create a random array
  array<int, 10> input;
  //Initialize it
  fill_array(input);
  //Shuffle it
  shuffle_array(input);
  // Show it to user
  cout << "The input is: " << endl;
  print_array(input);
  // Make two copies of it
  auto result = input;
  auto desired = input;
  // Sort each of them, one with std an other with you algorithm
  sort(desired.begin(), desired.end());
  insertion_sort(result);
  // Compare the results
  if (result == desired) {
    cout << "The result is correct!" << endl;
    print_array(result);
  } else {
    cout << "The result is incorrect!" << endl;
    cout << "Result:" << endl;
    print_array(result);
    cout << "Desired:" << endl;
    print_array(desired);
  }
	return 0;
}

void insertion_sort(array<int, N>& input) {
  for (size_t i = 0; i < N; ++i) {
    size_t max_key = 0;
    for (size_t j = 1; j < N - i; ++j) {
      if (input[j] > input[max_key]) {
        max_key = j;
      }
    }
    if (max_key != N - i - 1) {
      auto tmp = input[N - i - 1];
      input[N - i - 1] = input[max_key];
      input[max_key] = tmp;
    }
  }
}


void print_array(const array<int, 10>& input) {
  for (auto& x : input) {
    cout << x << " ";
  }
  cout << endl;
}

void fill_array(array<int, N>& target) {
  int n = 1;
  for (auto it = target.begin(); it != target.end(); ++it) {
    *it = n++;
  }
}

void shuffle_array(array<int, N>& input) {
  // obtain a time-based seed:
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  cout << "The random seed is: " << seed << endl;
  shuffle(input.begin(), input.end(), default_random_engine(seed));
}
