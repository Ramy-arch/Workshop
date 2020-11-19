#include <iostream>
#include<iomanip>
using namespace std;

class Student{
  public:
  string Name;
  int ID;
  int Year;

  Student(string a,int b,int c); 
};

Student::Student(string a,int b,int c){
  Name = a;
  ID = b;
  Year = c;
}

int main () {
  Student obj("Ramy",12459875,2020);
  cout<<"Nom : "<<obj.Name<<"\nID : "<<obj.ID<<"\nannee : "<<obj.Year<<endl;
  
  return 0;
}

