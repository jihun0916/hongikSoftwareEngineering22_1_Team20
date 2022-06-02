#include "ShowSoldItemsUI.h"

//Function:PrintItem
//Description: �ǸſϷ�� ��ǰ�� ����� ����Ѵ�.
//Parameter: X
//Return Value: X
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 ������

void ShowSoldItemsUI::PrintSoldItems(ItemList& _list) {
	ofstream fout("output.txt", ios::app);
	fout << "3 3\n";
	list<Item>::iterator iter;
	for (iter = _list.Items.begin(); iter!= _list.Items.end();iter++)//��ȸ�ϴٰ�
	{
		if (iter->currentstate == state::UNSELLABLE)//������ ��� �ǸſϷ�� ���ǵ��� ��ϸ� ����Ʈ
			iter->PrintElement(0,0);
	}
}