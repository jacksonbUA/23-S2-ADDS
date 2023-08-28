#include "Finder.h"
using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;
  size_t s1_length = s1.length();
  int s2_index = 1;
  int s2_remaining = s2.length();
  for (size_t i = 0; i < s1_length ; i++) {

    size_t found = s1.find(s2.substr(0, s2_index));

    if (found != string::npos) {
      result.push_back(found);
      s2_remaining--;
      s2_index++;
    }

    else {
      result.insert(result.end(), s2_remaining, -1);
      return result;
    }
  }
  return result;
}
