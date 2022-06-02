#include "Header.h"

Member::Member(string id, string password, string name, string residentNumber){
  this->id = id;
  this->password = password;
  this->name = name;
  this->residentNumber = residentNumber;
}

string Member::getId(){
  return id;
}