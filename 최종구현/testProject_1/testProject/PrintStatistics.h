#pragma once
#include "Main.h"
#include "PrintStatisticsUI.h"

//Class: PrintStatistics (Control Class)
//Description: ��� ����� �����Ѵ�. �ٿ���� Ŭ������ ���� �ѱ��.
//Created: 2022/06/03 08:00 AM (updated)
//Author: B811173 ������
//mail: 0324_j@g.hongik.ac.kr

class PrintStatistics
{
public:
	PrintStatistics(ItemList& _list) {
		myUI.printStatistics(_list);
	}
private:
	PrintStatisticsUI myUI;
};