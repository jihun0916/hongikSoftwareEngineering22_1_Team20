#include "PrintStatisticsUI.h"

//Function:printStatistics
//Description: �Ǹ� ��ǰ�� ��踦 ����Ѵ�.
//Parameter: ItemList&
//Return Value: X
//Created: 2022/06/03 08:00 AM (updated)
//Author: B811173 ������
//mail: 0324_j@g.hongik.ac.kr

void PrintStatisticsUI::printStatistics(ItemList& _list)
{
	ofstream fout("output.txt", ios::app);
	list<Item>::iterator iter;
	for (iter = _list.Items.begin(); iter != _list.Items.end(); iter++)//��ȸ�ϴٰ�
	{
		iter->PrintElement(5, 1);
	}
}