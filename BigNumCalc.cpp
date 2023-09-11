#include "BigNumCalc.h"

  bigNumCalc::bigNumCalc() {

  }
  std::list<int> bigNumCalc::buildBigNum(std::string numString) {
    
    std::list<int> list_build;
    int string_significance = numString.length();
    int numInt = stoi(numString);

    for (int i = 0; i < string_significance; i++) {

      list_build.push_back(numInt % 10);
      numInt / 10;
    }

    return list_build;

  }

  std::list<int> bigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    int carry_over = 0;
    std::list<int> sum;
    std::list<int>* big_list;
    std::list<int>* small_list;

    if (num1.size() > num2.size()) {
      big_list = &num1;
      small_list = &num2;
    }

    else {
      big_list = &num2;
      small_list = &num1;
    }


    for (auto it_big = num1.end(); it_big != num1.begin(); it_big--) {

      sum.push_front(*it_big);  

    }

    auto it_sum = sum.end();
    for (auto it_small = num2.end(); it_small != num2.begin(); it_small--) {
      
      sum

    }

  }
  std::list<int> bigNumCalc::sub(std::list<int> num1, std::list<int> num2);
  std::list<int> bigNumCalc::mul(std::list<int> num1, std::list<int> num2);

