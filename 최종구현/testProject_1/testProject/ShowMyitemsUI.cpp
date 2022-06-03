#include "ShowMyitemsUI.h"

//Function:PrintItem
//Description: 등록한 상품의 정보를 출력한다.
//Parameter: X
//Return Value: X
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈

void ShowMyitemsUI::PrintItems() {
	ofstream fout("output.txt", ios::app);
	fout << "3.2. 등록 상품 조회" << endl;
	list<Item>::iterator iter;
		for (iter = it.Items.begin(); iter != it.Items.end(); iter++)//순회하면서 목록 프린트
		{
			iter->PrintElement(0, 0);
		}
}