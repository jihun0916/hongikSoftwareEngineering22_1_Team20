#include "Header.h"

LogIn::LogIn() {
	LogInUI logInUI;

	logInUI.startInterface();
	logInUI.initLogIn(this);
}

Member LogIn::logInMember(MemberList* memberList, string id, string password) {
	return memberList->logInMember(id, password);
}