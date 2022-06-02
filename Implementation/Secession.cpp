#include "Header.h"

Secession::Secession(){
  SecessionUI secessionUI;

  secessionUI.startInterface();
  secessionUI.initSecession(this);
}

void Secession::deleteMember(MemberList* memberList, Member member){
  memberList->deleteMember(member);
}