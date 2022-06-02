#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include "Header.h"

using namespace std;

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void join();
void program_exit();

// 변수 선언
ifstream in_fp;
ofstream out_fp;

MemberList currentMemberList;
Member currentMember("", "", "", "");

void SignUpUI::initSignUp(SignUp* signUp){
  // 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
  string name, residentNumber, id, password;

  in_fp >> name >> residentNumber >> id >> password;
  Member member(id, password, name, residentNumber);

  out_fp << "1.1. 회원가입" << endl;
  out_fp << name << " " << residentNumber << " " << id << " " << password << endl;

  signUp->createMember(&currentMemberList, member);
}

void SecessionUI::initSecession(Secession* secession){
  out_fp << "1.2. 회원탈퇴" << endl;
  out_fp << currentMember.getId() << endl;

  secession->deleteMember(&currentMemberList, currentMember);
}

void LogInUI::initLogIn(LogIn* logIn){
  string id, password;
  in_fp >> id >> password;

  out_fp << "2.1. 로그인" << endl;
  out_fp << id << " " << password << endl;

  logIn->logInMember(&currentMemberList, id, password);
}

void LogOutUI::initLogOut(LogOut* logOut){
  currentMember = logOut->logOutMember(&currentMemberList);
}

int main(){
  // 파일 입출력을 위한 초기화
  in_fp.open(INPUT_FILE_NAME);
  out_fp.open(OUTPUT_FILE_NAME, ios::app);

  doTask();
 
  return 0;
}

void doTask(){
  // 메뉴 파싱을 위한 level 구분을 위한 변수
  int menu_level_1 = 0, menu_level_2 = 0; int is_program_exit = 0;

  while(!is_program_exit) { 
    // 입력파일에서 메뉴 숫자 2개를 읽기
    in_fp >> menu_level_1 >> menu_level_2;

    // 메뉴 구분 및 해당 연산 수행
    switch(menu_level_1) { 
      case 1: 
      { 
        switch(menu_level_2) { 
          case 1: // 1.1. 회원가입
          {
            SignUp signUp;
            break; 
          } 
          case 2: // 1.2 탈퇴하기
          { 
            Secession secession;
            break; 
          } 
        }
        case 2:
        {
          switch(menu_level_2){
            case 1: // 2.1 로그인
            {
              LogIn logIn; 
              break;
            }
            case 2: // 2.2 로그아웃
            {
              LogOut logOut;
              break;
            }
          }
        }
        case 7: 
        { 
          switch(menu_level_2) 
          { 
            case 1: // "6.1. 종료“ 메뉴 부분
            { 
             program_exit(); 
             is_program_exit = 1; 
             break;; 
            } 
          }
        }
      }
    return;
    }
  }
}

void program_exit()
{ 

}