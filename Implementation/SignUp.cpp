#include "Header.h"

SignUp::SignUp(){
  SignUpUI signUpUI;

  signUpUI.startInterface();
  signUpUI.initSignUp(this);
}

void SignUp::createMember(MemberList* memberList, Member member){
  memberList->createMember(member);
}