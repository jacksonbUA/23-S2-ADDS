#include "Finder.h"
using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result {0};
  size_t s1_length = s1.length();
  int s2_index = 1;
  int s2_remaining = s2.length();
  int s1_last_pos = 0;
  for (size_t i = 0; i < s1_length ; i++) {

    size_t found = s1.substr(result[s1_last_pos], s1_length).find(s2.substr(0, s2_index));

    if (found != string::npos) {
      result.push_back(found);
      s2_remaining--;
      s2_index++;
      s1_last_pos = i;
    }

    else {
      result.insert(result.end(), s2_remaining, -1);
      result.erase(result.begin());
      return result;
    }
  }
  result.erase(result.begin());
  return result;
}
