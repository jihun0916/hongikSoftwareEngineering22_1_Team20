#pragma once
#include "Main.h"
#include "PrintStatisticsUI.h"

//Class: PrintStatistics (Control Class)
//Description: 통계 출력을 제어한다. 바운더리 클래스로 값을 넘긴다.
//Created: 2022/06/03 08:00 AM (updated)
//Author: B811173 정서연
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