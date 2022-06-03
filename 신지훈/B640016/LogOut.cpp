#include "Header.h"

LogOut::LogOut() {
	LogOutUI logOutUI;

	logOutUI.startInterface();
	logOutUI.initLogOut(this);
}

Member LogOut::logOutMember(MemberList* memberList) {
	return memberList->logOutMember();
}