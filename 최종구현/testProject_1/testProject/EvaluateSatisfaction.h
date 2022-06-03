#pragma once
#include "Main.h"
#include "EvaluateSatisfactionUI.h"
#include <iostream>
using namespace std;

//Class: EvaluateSatisfation (Control Class)
//Description: ������ �� ������ �����Ѵ�. �ٿ���� Ŭ������ ���� �ѱ��.
//Created: 2022/06/03 08:00 AM (updated)
//Author: B811173 ������
//mail: 0324_j@g.hongik.ac.kr

class EvaluateSatisfation {
public:
	EvaluateSatisfation(string keyword, ItemList& _list, int _satisfaction) { 
		IsExist = myUI.evaluteItem(_list, keyword, _satisfaction);	
	}
	bool IsExist = false;
private:
	EvaluateSatisfactionUI myUI;
};