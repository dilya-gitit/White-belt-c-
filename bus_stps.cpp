#include <iostream>
#include <map>
#include <vector>
using namespace std;
bool thereIs (const string& str, const map<string, vector<string>>& mapa) {
  for (map<string, vector<string>> :: const_iterator ptr = mapa.begin(); ptr != mapa.end(); ptr++) {
        for (vector<string> :: const_iterator eptr = ptr -> second.begin(); eptr != ptr -> second.end(); eptr++) {
          if ( *eptr == str) {
      return 1;
      } 
        }
    }
  return 0;
}
void printiMap (const map<string, vector<string>>& mapa) {//print map FOR SUBLIME
  for (map<string, vector<string>> :: const_iterator ptr = mapa.begin(); ptr != mapa.end(); ptr++) {
        cout << ptr -> first << ": ";
        for (vector<string> :: const_iterator eptr = ptr -> second.begin(); eptr != ptr -> second.end(); eptr++) {
          cout << *eptr << " ";
        }
          cout << endl;
    }
}
void printMap (const map<string, vector<string>>& mapa) {//print map
  
    for (const auto i : mapa) {
      cout << i.first << ": ";
      for (const auto n : i.second) {
        cout << n << " "; 
      } 
      cout << endl;
    }
}

int main () {
  int Q;
  cin >> Q;
  map<string, vector<string>> buses = {{"bus1", {"rti", "kolce", "bitch"}}, {"bus2", {"give", "me"}}};
  for (int i = 0; Q > i; i++) {
    string command;
    cin >> command;
    if (command == "ALL_BUSES") {
      if (buses.size() == 0) {
        cout << "No buses" << endl;
      } else {
        printMap(buses);
      }
    } else if (command == "STOPS_FOR_BUS") {
      string bas;
      cin >> bas;
    } else if (command == "BUSES_FOR_STOP") {
      string stop;
      cin >> stop;
      if (thereIs(stop, stops)) {
        cout << "test" << endl; 
      } else {
        cout << "No stop" << endl;
      }
    } else if (command == "NEW_BUS") {
      string bus;
      int stop_count;
      cin >> bus >> stop_count;
      vector<string> ostanovki(stop_count);
      for (int j = 0; stop_count > j; j++) {
        cin >> ostanovki[j];
      }
      buses[bus] = ostanovki;
    }
  }
}
