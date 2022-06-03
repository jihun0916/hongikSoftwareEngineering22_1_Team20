#pragma once
#pragma warning(disable:4996)
#include "Main.h"
#include "ItemRegistration.h"
#include "ShowMyitems.h"
#include "ItemInfoSearch.h"
#include "PurchaseItem.h"
#include "ShowSoldItems.h"
#include <iostream>
#include <fstream>
#include "Header.h"

using namespace std;

ifstream in_fp;
ofstream out_fp;

MemberList currentMemberList;
Member currentMember("", "", "", "");

void SignUpUI::startInterface() {
	cout << "Sign Up" << endl;
}

void program_exit()
{
	out_fp.close();
}

void SignUpUI::initSignUp(SignUp* signUp) {
	// �Է� ���� : �̸�, �ֹι�ȣ, ID, Password�� ���Ϸκ��� ����
	string name, residentNumber, id, password;

	in_fp >> name >> residentNumber >> id >> password;
	Member member(id, password, name, residentNumber);

	out_fp << " 1.1. ȸ������\n";

	out_fp << "> "<< name << " " << residentNumber << " " << id << " " << password << "\n";

	signUp->createMember(&currentMemberList, id, password, name, residentNumber);
}

void SecessionUI::startInterface() {
	cout << "Secession" << endl;
}

void SecessionUI::initSecession(Secession* secession) {
	out_fp << "1.2. ȸ��Ż��" << endl;
	out_fp << "> "<< currentMember.getId() << endl;

	secession->deleteMember(&currentMemberList, currentMember.getId());
}

void LogInUI::startInterface() {
	cout << "LogIn" << endl;
}

void LogInUI::initLogIn(LogIn* logIn) {
	string id, password;
	in_fp >> id >> password;

	out_fp << "2.1. �α���\n";
	out_fp <<"> " << id << " " << password << "\n";

	logIn->logInMember(&currentMemberList, id, password);
}

void LogOutUI::startInterface() {
	cout << "�α׾ƿ�" << endl;
}

void LogOutUI::initLogOut(LogOut* logOut) {

	out_fp << "2.2. �α׾ƿ�\n";
	out_fp << "> "<< currentMember.getId() << endl;

	currentMember = logOut->logOutMember(&currentMemberList);
}

bool IsSelected; //4.2 ������ ��� 4.1 �˻������� ����ǰ� ��ǰ�� ���õǾ�� ����ǹǷ� ����Ȯ���� ���� ��������
//string currentID = "test1"; //���� ����ϴ� ������� ���̵�
string currentkey; //���� �ֱٿ� �˻��� �˻���



//Function:Run
//Description: Make�� ������ �Լ�, ���α׷��� ���۽�Ų��
//Parameter: X
//Return Value: X
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 ������

void Main::Run()
{

	ifstream fin(INPUT_FILE_NAME);


	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit)
	{
		//fscanf(in_fp, "&d %d ", &menu_level_1, &menu_level_2);
		fin >> menu_level_1;
		fin >> menu_level_2;
		switch (menu_level_1)
		{
		case 1:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				//1.1. ȸ������ �޴� �κ�
				//ȸ������ �Լ�
				SignUp signUp;
				break;
			}
			case 2:
			{
				//1.2 ȸ��Ż��
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
				LogIn logIn;
				break;
			}
			case 2:
			{
				//2.2 �α׾ƿ�
				LogOut logOut;
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
				//Account?
				string ID = currentMember.getId();

				char name[MAX_STRING], company[MAX_STRING], price[MAX_STRING], quantity[MAX_STRING];
				//�ʿ��� ���ڼ������ ��������

				fin >> name; //�Է��� ������ ����
				fin >> company;
				fin >> price;
				fin >> quantity;
				int _price, _quantity; //������ �ڷ���� ��ȯ
				sscanf_s(price, "%d", &_price);
				sscanf_s(quantity, "%d", &_quantity);

				ItemRegistration Registration(name, company, _price, _quantity, this->saleList[ID], this->purchaseList, ID); //�Ƿ���� ��Ʈ�� Ŭ�������� ����
				//3.1 �Ǹ��Ƿ����
				break;
			}
			case 2:
			{
				//3.2 ��� ��ǰ ��ȸ
				ShowMyitems ShowItems(this->saleList[currentMember.getId()]);

				break;
			}
			case 3:
			{
				ShowSoldItems ShowsoldItem(this->saleList[currentMember.getId()]);
				//3.3 �Ǹ� �Ϸ� ��ǰ ��ȸ
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
					PurchaseItem Purchaseitem(currentMember.getId(), currentkey, this->purchaseList, this->base);
					currentkey = "";
				}
				//4.2 ��ǰ ����
				//4.2 ��ǰ ����
				break;
			}
			case 3:
			{
				//4.3 ��ǰ ���� ���� ��ȸ
				break;
			}
			case 4:
			{

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
				program_exit();
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

