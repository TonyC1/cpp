
#include <string>
#include <iostream>
// #include "timer_syn.h"
#include "c_server.h"
#include "c_client.h"
// test

using namespace std;

int main() {
  string choice;

  cout << "remote Code \n";
  cout << "--------------\n";
  cout << "Valid  Options:\n";
  cout << "   w - Hello World\n";
  cout << "   t - timer sync\n";
  cout << "   f - foo class list initialisaton\n";
  cout << "   c - comms client\n";
  cout << "   s - comms server\n";
  // cout << "   l - local function\n";
  // cout << "   f - folder header \n";

  cout << "   0 - Exit\n ";
  cout << "Input choice: ";
  cin >> choice;

  if (choice=="w") {
    cout << "\n Hello World \n";

  // } else if (choice=="t") {
  //   timer_syn();
  
  } else if (choice=="c") {
    c_client();

    } else if (choice=="s") {
    c_server();


  } else {
    cout << "\n Exiting \n";
  }

  return 0;
}
 