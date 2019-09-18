#include <iostream>
#incluse <chrono>

int main() {
  auto start_time = chrono::steady_clock::now();
  // do something
  auto end_time = chrono::steady_clock::now();
  auto time_diff = chrono::duration_cast<chrono::seconds>(end_time - start_time).cout();
}
