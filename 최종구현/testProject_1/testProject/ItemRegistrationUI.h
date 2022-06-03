#include "ItemList.h"
#include "Main.h"

//Class: ItemRegistrationUI (Boundary Class)
//Description: 상품등록 시 받은 매개변수들로 등록된 아이템의 정보를 출력한다.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈
//mail: vv1663@naver.com

class ItemRegistrationUI
{
public:
	char* name, * company; //상품의 정보 (이름, 회사명)
	int price, quantity; // (가격, 수량)
	int satisfaction = 0;

	void PrintOutput(); //정보를 출력하는 함수
private:

};