#include "Student.h"
#include <iostream>
#include <cstring>


void Student::assignDetails(int stdid,char name1[]) {
  studentId = stdid;
  strcpy(name,name1);
}


void Student::display() {
  cout<<studentId<<endl<<name ;
  
}
