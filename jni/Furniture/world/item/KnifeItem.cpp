#include "KnifeItem.h"

int KnifeItem::_id = 482;

KnifeItem::KnifeItem(int id) : FurnitureItem("itemKnife", id) {
	setIcon("itemknife", 0);
}
