#include "Header.h"

Secession::Secession() {
	SecessionUI secessionUI;

	secessionUI.startInterface();
	secessionUI.initSecession(this);
}

void Secession::deleteMember(MemberList* memberList, string id) {
	memberList->deleteMember(id);
}