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
	fout << "1.1. 회원가입" << endl;
}

void SignUpUI::initSignUp(SignUp* signUp) {
	// 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
	string name, residentNumber, id, password;

	fin >> name >> residentNumber >> id >> password;
	Member member(id, password, name, residentNumber);

	ofstream fout("output.txt", ios::app);
	fout << "> " << name << " " << residentNumber << " " << id << " " << password << endl;

	signUp->createMember(&currentMemberList, id, password, name, residentNumber);
}

void SecessionUI::startInterface() {
	ofstream fout("output.txt", ios::app);
	fout << "1.2. 회원탈퇴" << endl;
}

void SecessionUI::initSecession(Secession* secession) {
	ofstream fout("output.txt", ios::app);
	fout<< "> " << currentMember.getId() << endl;

	secession->deleteMember(&currentMemberList, currentMember.getId());
}

void LogInUI::startInterface() {
	ofstream fout("output.txt", ios::app);
	fout << "2.1. 로그인\n";
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
	fout << "2.2. 로그아웃" << endl;
}

void LogOutUI::initLogOut(LogOut* logOut) {
	ofstream fout("output.txt", ios::app);
	fout << "> " << currentMember.getId() << endl;

	currentMember = logOut->logOutMember(&currentMemberList);
}

void Main::Run()
{
	cout << "정상실행" << endl;
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
				//2.1 로그인
				LogIn login;
				break;
			}
			case 2:
			{
				//2.2 로그아웃
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
				//필요한 인자순서대로 변수선언

				fin >> name; //입력을 변수에 대입
				fin >> company;
				fin >> price;
				fin >> quantity;

				int _price, _quantity; //정수형 자료들은 변환
				sscanf_s(price, "%d", &_price);
				sscanf_s(quantity, "%d", &_quantity);
				int satisfaction = 0;
			
				ItemRegistration Registration(name, company, _price, _quantity, satisfaction, this->saleList[ID], this->purchaseList, ID); //의류등록 컨트롤 클래스에게 전달
				//3.1 판매의류등록
				break;
			}
			case 2:
			{
				//3.2 등록 상품 조회
				ShowMyitems ShowItems(this->saleList[currentID]);
				break;
			}
			case 3:
			{
				//3.3 판매 완료 상품 조회
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
				//4.1 상품 정보 검색

				break;
			}
			case 2:
			{
				if (IsSelected) {
					PurchaseItem Purchaseitem(currentID, currentkey, this->purchaseList, this->base);
					currentkey = "";
				}
				//4.2 상품 구매
				break;
			}
			case 3:
			{
				ShowPurchaseList ShowPurchaseItem(this->base[currentID]);
				//4.3 상품 구매 내역 조회
				break;
			}
			case 4:
			{	
				int satisfaction;
				fin >> currentkey;
				fin >> satisfaction;
				EvaluateSatisfation EvaluateItem(currentkey, this->purchaseList, satisfaction);
				IsSelected = EvaluateItem.IsExist;
				//4.4 상품 구매만족도 평가
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
				//5.1판매 상품 통계
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
				cout << "종료" << endl;

				ofstream fout("output.txt", ios::app);
				fout << "6.1. 종료" << endl;

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