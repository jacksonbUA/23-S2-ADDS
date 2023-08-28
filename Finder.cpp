#include "Finder.h"
using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;
  int s2_index = 0;
  for(size_t i = 1; i <= s2.size(); i++) {
    size_t found = s1.find(s2.substr(s2[s2_index] - '0', i));
    if (found != string::npos) {
      s2_index++;
      result.push_back(found);
    } 
    else {
      for(i; i <= s2.size(); i++) {
        result.push_back(-1);
      }
    }
  }
  return result;
}
