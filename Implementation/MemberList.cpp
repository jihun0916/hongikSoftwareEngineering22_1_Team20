#include "Header.h"

MemberList::MemberList(){
  this->memberCount = 0;
}

void MemberList::createMember(Member member){
  Member* memberList = this->memberList;
  int memberCount = this->memberCount;

  memberList[memberCount] = member;
  this->memberCount++;
}

void MemberList::deleteMember(Member member){
  Member* memberList = this->memberList;
  int memberCount = this->memberCount;

  for(int i = 0; i < memberCount; i++){
    if(member.getId() == memberList[i].getId()){
      memmove(memberList + i, memberList + i + 1, sizeof(Member) * (MAX_MEMBER_COUNT - (i + 1)));
      this->memberCount--;
      return;
    }
  }
}

Member MemberList::logInMember(string id, string password){
  Member* memberList = this->memberList;
  int memberCount = this->memberCount;

    for(int i = 0; i < memberCount; i++){
      if(id == memberList[i].getId()){
        return memberList[i];
      }
    }
}

Member MemberList::logOutMember(){
  return Member("", "", "", "");
}