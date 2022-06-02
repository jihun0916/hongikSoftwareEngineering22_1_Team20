#include "Header.h"

MemberList::MemberList() {
    this->memberCount = 0;
}

void MemberList::createMember(string id, string password, string name, string residentNumber) {
    memberList[memberCount++] = new Member(id, password, name, residentNumber);
}

void MemberList::deleteMember(string id) {
    for (int i = 0; i < memberCount; i++) {
        if (id == memberList[i]->getId()) {
            memmove(memberList + i, memberList + i + 1, sizeof(Member) * (MAX_MEMBER_COUNT - (i + 1)));
            this->memberCount--;
            return;
        }
    }
}

Member MemberList::logInMember(string id, string password) {
    for (int i = 0; i < memberCount; i++) {
        if (id == memberList[i]->getId()) {
            return *memberList[i];
        }
    }
    return Member("", "", "", "");
}

Member MemberList::logOutMember() {
    return Member("", "", "", "");
}