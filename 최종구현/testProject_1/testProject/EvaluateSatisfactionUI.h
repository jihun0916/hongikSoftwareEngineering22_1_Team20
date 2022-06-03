#pragma once
#include "Main.h"
#include "ItemList.h"

//Class: EvaluateSatisfactionUI (Boundary Class)
//Description: 넘겨받은 구매 리스트에 해당 key 값이 있는지 확인해, 여부에 따라 만족도 값을 변경한다.
//Created: 2022/06/03 08:00 AM (updated)
//Author: B811173 정서연
//mail: 0324_j@g.hongik.ac.kr

class EvaluateSatisfactionUI {
public:
	bool evaluteItem(ItemList& _list, string key, int _satisfaction);
private:

};