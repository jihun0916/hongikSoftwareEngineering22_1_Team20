#include "PurchaseItem.h"

//Function:PurchaseItem
//Description: 4.1에서 검색한 상품을 구매한다. 구매는 해당 아이템의 수량을 1개 낮추고, 판매개수를 1개 늘린다.
//Parameter: X
//Return Value: X
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈

PurchaseItem::PurchaseItem(string ID, string key, ItemList & _list, map<string, ItemList>&_base) {
	Item it;
	list<Item>::iterator iter;
	for (iter = _list.Items.begin(); iter != _list.Items.end(); iter++)
	{
			if (iter->GetItemName() == key) { //구매하려는 상품이 맞다면
				it = *iter;
				_base[ID].Items.push_back(it); //구매완료 목록에 추가
				iter->ReduceQuantity(); //수량 1개 감소 & 판매 개수 1개 증가
				myUI.SetItem(*iter);
				myUI.PrintItem(); //바운더리 클래스에서 출력
			}
		}
	}