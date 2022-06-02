#include "Item.h"

//Function:SetElement
//Description: Item Class의 인자를 설정해준다.
//Parameter: 이름, 회사명, 가격, 수량 , 판매자
//Return Value: X
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈

void Item::SetElement(char* _name, char* _company, int _price, int _quantity,string	_ID)
{
	name = _name, company = _company, price = _price, quantity = _quantity, ID = _ID;
}

//Function:PrintElement
//Description: Item Class의 인자를 출력해준다.
//Parameter: 입력 정수 1,2 (재사용을 위함)
//Return Value: X
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈

void Item::PrintElement(int menu1, int menu2) {
	ofstream fout("output.txt", ios::app); //파일에 출력
	if (menu1 == 0 && menu2 == 0) { //0.0 어떤 명령인지 설정하지 않고 아이템의 인자를 출력하고 싶을 때
		fout << name << " " << company << " " << price << " " << quantity << endl;
	}
	else if (menu1 == 3 && menu2 == 3) { //3.3 판매완료 상품 조회시 사용하는 부분, 반복사용해야 하므로 숫자 출력을 생략한다.
		fout << name << " " << company << " " << price << " " << sellCount << " " << satisfaction << endl;
	}
	else if (menu1 == 4 && menu2 == 1) {//4.1 상품 정보 검색 시 사용되는 부분
		fout << menu1; fout << " "; fout << menu2; fout << " ";
		fout << ID << " " << name << " " << company << " " << price << " " << quantity << " " << satisfaction << endl;
	}
	else if (menu1 == 4 && menu2 == 2) {//4.2 상품 구매 시 사용되는 부분
		fout << menu1; fout << " "; fout << menu2; fout << " ";
		fout << ID <<" "<<name << endl;
	}
	else { //기본 출력 값
		fout << menu1; fout << " "; fout << menu2; fout << " ";
		fout << name << " " << company << " " << price << " " << quantity << endl;
	}
	//cout << name << " " << company << " " << price << " " << quantity;
	//디버그 용 코드
}

//디버그용 함수
void Item::TestPrint(){
	cout << "Test Print: ";
	cout << name << "," << company << "," << price << "," << quantity << endl;
}

