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
	cout << "Sign Up1" << endl;
}

void program_exit()
{
	out_fp.close();
}

void SignUpUI::initSignUp(SignUp* signUp) {
	// 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
	string name, residentNumber, id, password;

	in_fp >> name >> residentNumber >> id >> password;
	Member member(id, password, name, residentNumber);

	out_fp << " 1.1. 회원가입\n";

	out_fp << "> "<< name << " " << residentNumber << " " << id << " " << password << "\n";

	signUp->createMember(&currentMemberList, id, password, name, residentNumber);
}

void SecessionUI::startInterface() {
	cout << "Secession" << endl;
}

void SecessionUI::initSecession(Secession* secession) {
	out_fp << "1.2. 회원탈퇴" << endl;
	out_fp << "> "<< currentMember.getId() << endl;

	secession->deleteMember(&currentMemberList, currentMember.getId());
}

void LogInUI::startInterface() {
	cout << "LogIn" << endl;
}

void LogInUI::initLogIn(LogIn* logIn) {
	string id, password;
	in_fp >> id >> password;

	out_fp << "2.1. 로그인\n";
	out_fp <<"> " << id << " " << password << "\n";

	logIn->logInMember(&currentMemberList, id, password);
}

void LogOutUI::startInterface() {
	cout << "로그아웃" << endl;
}

void LogOutUI::initLogOut(LogOut* logOut) {

	out_fp << "2.2. 로그아웃\n";
	out_fp << "> "<< currentMember.getId() << endl;

	currentMember = logOut->logOutMember(&currentMemberList);
}

bool IsSelected; //4.2 구매의 경우 4.1 검색과정이 선행되고 상품이 선택되어야 실행되므로 상태확인을 위한 전역변수
//string currentID = "test1"; //현재 사용하는 사용자의 아이디
string currentkey; //가장 최근에 검색된 검색어



//Function:Run
//Description: Make의 유일한 함수, 프로그램을 동작시킨다
//Parameter: X
//Return Value: X
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈

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
				//1.1. 회원가입 메뉴 부분
				//회원가입 함수
				SignUp signUp;
				break;
			}
			case 2:
			{
				//1.2 회원탈퇴
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
				LogIn logIn;
				break;
			}
			case 2:
			{
				//2.2 로그아웃
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
				//필요한 인자순서대로 변수선언

				fin >> name; //입력을 변수에 대입
				fin >> company;
				fin >> price;
				fin >> quantity;
				int _price, _quantity; //정수형 자료들은 변환
				sscanf_s(price, "%d", &_price);
				sscanf_s(quantity, "%d", &_quantity);

				ItemRegistration Registration(name, company, _price, _quantity, this->saleList[ID], this->purchaseList, ID); //의류등록 컨트롤 클래스에게 전달
				//3.1 판매의류등록
				break;
			}
			case 2:
			{
				//3.2 등록 상품 조회
				ShowMyitems ShowItems(this->saleList[currentMember.getId()]);

				break;
			}
			case 3:
			{
				ShowSoldItems ShowsoldItem(this->saleList[currentMember.getId()]);
				//3.3 판매 완료 상품 조회
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
					PurchaseItem Purchaseitem(currentMember.getId(), currentkey, this->purchaseList, this->base);
					currentkey = "";
				}
				//4.2 상품 구매
				//4.2 상품 구매
				break;
			}
			case 3:
			{
				//4.3 상품 구매 내역 조회
				break;
			}
			case 4:
			{

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

