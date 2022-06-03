#pragma once
#pragma warning(disable:4996)
#include "Main.h"
#include "EvaluateSatisfaction.h"
#include "ItemRegistration.h"
#include "ShowPurchaseList.h"
#include "PurchaseItem.h"
#include "ItemInfoSearch.h"
#include "PrintStatistics.h"
#include "ShowMyitems.h"
#include "ShowSoldItems.h"
#include "Header.h"
#include <iostream>
#include <fstream>
using namespace std;

bool IsSelected;
string currentID;
string currentkey;
Member currentMember = Member("", "", "", "");
MemberList currentMemberList;
ifstream fin(INPUT_FILE_NAME);

void SignUpUI::startInterface() {
	ofstream fout("output.txt", ios::app);
	fout << "1.1. ȸ������" << endl;
}

void SignUpUI::initSignUp(SignUp* signUp) {
	// �Է� ���� : �̸�, �ֹι�ȣ, ID, Password�� ���Ϸκ��� ����
	string name, residentNumber, id, password;

	fin >> name >> residentNumber >> id >> password;
	Member member(id, password, name, residentNumber);

	ofstream fout("output.txt", ios::app);
	fout << "> " << name << " " << residentNumber << " " << id << " " << password << endl;

	signUp->createMember(&currentMemberList, id, password, name, residentNumber);
}

void SecessionUI::startInterface() {
	ofstream fout("output.txt", ios::app);
	fout << "1.2. ȸ��Ż��" << endl;
}

void SecessionUI::initSecession(Secession* secession) {
	ofstream fout("output.txt", ios::app);
	fout<< "> " << currentMember.getId() << endl;

	secession->deleteMember(&currentMemberList, currentMember.getId());
}

void LogInUI::startInterface() {
	ofstream fout("output.txt", ios::app);
	fout << "2.1. �α���\n";
}

void LogInUI::initLogIn(LogIn* logIn) {
	string id, password;
	fin >> id >> password;

	cout << "fin : " << id << password << endl;

	ofstream fout("output.txt", ios::app);
	fout << "> " << id << " " << password << endl;

	currentMember = logIn->logInMember(&currentMemberList, id, password);
}

void LogOutUI::startInterface() {
	ofstream fout("output.txt", ios::app);
	fout << "2.2. �α׾ƿ�" << endl;
}

void LogOutUI::initLogOut(LogOut* logOut) {
	ofstream fout("output.txt", ios::app);
	fout << "> " << currentMember.getId() << endl;

	currentMember = logOut->logOutMember(&currentMemberList);
}

void Main::Run()
{
	cout << "�������" << endl;
	/*FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");*/

	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit)
	{
		//fscanf(in_fp, "&d %d ", &menu_level_1, &menu_level_2);
		fin >> menu_level_1;
		fin >> menu_level_2;
		cout << "input : " << menu_level_1 << " " << menu_level_2 << endl;
		switch (menu_level_1)
		{
		case 1:
		{
			switch (menu_level_2)
			{
			case 1:
			{	
				SignUp signUp;

				break;
			}
			case 2:
			{
				Secession secession;
				break;
			}
			}
			break;
		}
		case 2:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				//2.1 �α���
				LogIn login;
				break;
			}
			case 2:
			{
				//2.2 �α׾ƿ�
				LogOut logout;
				break;
			}
			}
			break;
		}
		case 3:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				string ID = currentID;

				char name[MAX_STRING], company[MAX_STRING], price[MAX_STRING], quantity[MAX_STRING];
				//�ʿ��� ���ڼ������ ��������

				fin >> name; //�Է��� ������ ����
				fin >> company;
				fin >> price;
				fin >> quantity;

				int _price, _quantity; //������ �ڷ���� ��ȯ
				sscanf_s(price, "%d", &_price);
				sscanf_s(quantity, "%d", &_quantity);
				int satisfaction = 0;
			
				ItemRegistration Registration(name, company, _price, _quantity, satisfaction, this->saleList[ID], this->purchaseList, ID); //�Ƿ���� ��Ʈ�� Ŭ�������� ����
				//3.1 �Ǹ��Ƿ����
				break;
			}
			case 2:
			{
				//3.2 ��� ��ǰ ��ȸ
				ShowMyitems ShowItems(this->saleList[currentID]);
				break;
			}
			case 3:
			{
				//3.3 �Ǹ� �Ϸ� ��ǰ ��ȸ
				ShowSoldItems ShowsoldItem(this->saleList[currentID]);
				break;
			}
			}
			break;
		}
		case 4:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				fin >> currentkey;
				ItemInfoSearch SearchItem(currentkey, this->purchaseList);
				IsSelected = SearchItem.IsExist;
				//4.1 ��ǰ ���� �˻�

				break;
			}
			case 2:
			{
				if (IsSelected) {
					PurchaseItem Purchaseitem(currentID, currentkey, this->purchaseList, this->base);
					currentkey = "";
				}
				//4.2 ��ǰ ����
				break;
			}
			case 3:
			{
				ShowPurchaseList ShowPurchaseItem(this->base[currentID]);
				//4.3 ��ǰ ���� ���� ��ȸ
				break;
			}
			case 4:
			{	
				int satisfaction;
				fin >> currentkey;
				fin >> satisfaction;
				EvaluateSatisfation EvaluateItem(currentkey, this->purchaseList, satisfaction);
				IsSelected = EvaluateItem.IsExist;
				//4.4 ��ǰ ���Ÿ����� ��
				break;
			}
			}
			break;
		}
		case 5:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				PrintStatistics PrinStatistics(this->saleList[currentID]);
				//5.1�Ǹ� ��ǰ ���
				break;
			}
			}
			break;
		}
		case 6:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				cout << "����" << endl;

				ofstream fout("output.txt", ios::app);
				fout << "6.1. ����" << endl;

				is_program_exit = 1;
				break;
			}
			}
			break;
		}
		}

	}
	return;
}

int main() {
	Main mainf;
	mainf.Run();
	return 0;
}