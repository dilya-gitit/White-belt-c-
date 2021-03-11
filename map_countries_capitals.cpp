#include <iostream>
#include <map>
using namespace std;
bool thereIs (const string& str, const map<string, string>& mop) {
  for (const auto& item : mop) {
    if (item.first == str) {
      return 1;
    } 
  }
  return 0;
}
void changeKey (string old, string neww, map<string, string>& myMap) {
  string tmp;
  auto entry = myMap.find("old");
if (entry != end(myMap))
{
    auto const value = std::move(entry->second);
    myMap.erase(entry);
    myMap.insert({neww, std::move(value)});
}
  
}

int main () {
  int Q;
  cin >> Q; 
  map<string, string> all;
  for (int i = 0; Q > i; i++) {
    string command;
    cin >> command;
    if (command == "DUMP") {
      if (all.size() == 0) {
        cout << "There are no countries in the world" << endl;
      } else {
        for (const auto&item : all) {
        cout << item.first << "/" << item.second << " ";
      }
      }
    } else if (command == "ABOUT") {
      string country;
      cin >> country;
      if (thereIs (country, all)) {
        cout << "Country " << country << " has capital " << all[country] << endl;
      } else {
        cout << "Country " << country << " doesn't exist" << endl;
      } 
    } else if (command == "RENAME") {
      string old_country_name, new_country_name;
      cin >> old_country_name >> new_country_name;
      if ((thereIs(old_country_name, all)) && !(old_country_name == new_country_name || thereIs(new_country_name, all))) {
         changeKey(old_country_name, new_country_name, all);
        cout << "Country " << old_country_name << " with capital " << all[new_country_name] << " has been renamed to " << new_country_name << endl;
      } else {
        cout << "Incorrect rename, skip" << endl;
      }
    } else if (command == "CHANGE_CAPITAL") {
      string country, new_capital;
      cin >> country >> new_capital;
      if (thereIs(country, all)) {
        if (all[country] == new_capital) {
          cout << "Country "<< country << " hasn't changed its capital" << endl;
        } else {
          string old_capital = all[country];
          all[country] = new_capital;
          cout << "Country " << country << " has changed its capital from " <<  old_capital << " to " <<  new_capital << endl;
        }
      } else {
        all[country] = new_capital;
        cout << "Introduce new country " << country <<" with capital " << new_capital << endl; 
      }
    }
  }
}
