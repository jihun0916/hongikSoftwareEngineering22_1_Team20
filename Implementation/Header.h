#include <iostream>
#include <fstream>
#include <string>
#define MAX_MEMBER_COUNT 100
using namespace std;

class Member{
private:
  string name;
  string residentNumber;
  string id;
  string password;

public:
  Member(string id, string password, string name, string residentNumber);
  string getId();
};

class MemberList{
private:
  Member* memberList[MAX_MEMBER_COUNT];
  int memberCount;
public:
  MemberList();
  void createMember(string id, string password, string name, string residentNumber);
  void deleteMember(string id);
  Member logInMember(string id, string password);
  Member logOutMember();
};

class SignUp{
public:
  SignUp();
  void createMember(MemberList* memberList, string id, string password, string name, string residentNumber);
};

class SignUpUI{
public:
  void startInterface();
  void initSignUp(SignUp*);
};

class Secession{
public:
  Secession();
  void deleteMember(MemberList* memberList, string id);
};

class SecessionUI{
public:
  void startInterface();
  void initSecession(Secession*);
};

class LogIn{
public:
  LogIn();
  Member logInMember(MemberList* memberList, string id, string password);
};

class LogInUI{
public:
  void startInterface();
  void initLogIn(LogIn*);
};

class LogOut{
public:
  LogOut();
  Member logOutMember(MemberList* memberList);
};

class LogOutUI{
public:
  void startInterface();
  void initLogOut(LogOut*);
};