#include "ShowPurchaseListUI.h"

//Function:printPurchaseItems
//Description: ������ ��ǰ�� ������ ����Ѵ�.
//Parameter: X
//Return Value: X
//Created: 2022/06/03 08:00 AM (updated)
//Author: B811173 ������


void ShowPurchaseListUI::printPurchaseItems() {
	ofstream fout("output.txt", ios::app);
	//fout << "4.3. ��ǰ ���� ���� ��ȸ" << endl;
	list<Item>::iterator iter;
	for (iter = it.Items.begin(); iter != it.Items.end(); iter++)//��ȸ�ϸ鼭 ��� ����Ʈ
	{
		iter->PrintElement(4, 3);
	}
		return;
}