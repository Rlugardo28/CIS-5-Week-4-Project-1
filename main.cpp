#include <iostream>
#include <string>

// Project 1 — Raymundo Lugardo
// CIS 5 Week 04 · Student card
  using namespace std;

int main() {
  const int CURRENT_YEAR = 2026;
  
  string first = "Raymundo";
  int age = 26;
  int credits = 9;
  double gpa = 3.33;
  // TODO (week 3): declare and initialize the four boxes
  //   first (std::string), age (int), credits (int), gpa (double)
  cout << "First Name?";
  cin >> first;

  cout << "Age?";
  cin >> age;
  
  cout << "Credits?";
  cin>> credits;
   
  cout << "GPA?";
  cin >> gpa;

  // TODO (week 2): a cout question, then a cin into the box — four times
  int grad_year = 2026 + 1;
 
  // TODO (week 4): one computed line with an operator
  //   int grad_year = CURRENT_YEAR + 4;
  cout << "\n=== Student Card===\n";
  cout << "Name:" << first << "\n";
  cout << "Age:" << age << "\n";
  cout << "Credits this semester" << credits << "\n";
  cout << "GPA:" << gpa << "\n";
  cout << "Expected gradutaion:" << grad_year << "\n";
  // TODO (weeks 1-4): print the card from the variable names
  //   header line, one labeled line per variable, then the computed value
  


  return 0;
}
