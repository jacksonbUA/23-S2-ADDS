#include "Finder.h"
using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result{0};
  int result_index = 0;
  for(size_t i = 1; i <= s2.size(); i++) {
    size_t found = s1.substr(result[result_index],s1.length()).find(s2.substr(0, result_index));
    if (found != string::npos) {
      result_index++;
      result.push_back(found);
    } 
    else {
      for(; i <= s2.size(); i++) {
        result.push_back(-1);
      }
    }
  }
  result.erase(result.begin());
  return result;
}
