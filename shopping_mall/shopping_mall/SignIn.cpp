#include "Header.h"

SignUp::SignUp() {
	SignUpUI signUpUI;

	signUpUI.startInterface();
	signUpUI.initSignUp(this);
}

void SignUp::createMember(MemberList* memberList, string id, string password, string name, string residentNumber) {
	memberList->createMember(id, password, name, residentNumber);
}