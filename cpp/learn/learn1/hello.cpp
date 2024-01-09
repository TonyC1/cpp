#include <iostream>
#include <string>
#include "local_h.h"
#include "headers/folder_h.h"
// #include "split.h"

using namespace std;

void local_f() {
    cout << "\n Local Function \n";
}

int main() {
  string choice;
  cout << "First Play-2024 C++\n";
  cout << "--------------\n";
  cout << "Valid  Options:\n";
  cout << "   w - Hello World\n";
  cout << "   h - local header\n";
  cout << "   l - local function\n";
  cout << "   f - folder header \n";
  // cout << "   s - split header and code files \n";

  cout << "   0 - Exit\n ";
  cout << "Input choice: ";
  cin >> choice;

  if (choice=="w") {
    cout << "\n Hello World \n";

  } else if (choice=="h") {
    local_h();

  } else if (choice=="l") {
    local_f();

  } else if (choice=="f") {
    folder_h();

  // } else if (choice=="s") {
  //   split_h();

  } else {
    cout << "\n Exiting \n";

  }

  return 0;
}
 