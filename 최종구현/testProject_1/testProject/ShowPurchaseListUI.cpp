#include "ShowPurchaseListUI.h"

//Function:printPurchaseItems
//Description: 구매한 상품의 정보를 출력한다.
//Parameter: X
//Return Value: X
//Created: 2022/06/03 08:00 AM (updated)
//Author: B811173 정서연


void ShowPurchaseListUI::printPurchaseItems() {
	ofstream fout("output.txt", ios::app);
	//fout << "4.3. 상품 구매 내역 조회" << endl;
	list<Item>::iterator iter;
	for (iter = it.Items.begin(); iter != it.Items.end(); iter++)//순회하면서 목록 프린트
	{
		iter->PrintElement(4, 3);
	}
		return;
}