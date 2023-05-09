#include"Goods.h"

Goods::Goods(MAPELEMENT element) {
	m_Element = element;  // 地图标记
	switch (element) {
	case TOHP:  // 加血道具
		m_Abv = HPPROP;
		m_Name = "HPPROP";
		break;
	case TOATT:  // 加攻击道具
		m_Abv = ATTPROP;
		m_Name = "ATTPROP";
		break;
	case TODEF:  // 加防御道具
		m_Abv = DEFPROP;
		m_Name = "DEFPROP";
		break;
	case TOEXP:  // 加经验道具
		m_Abv = EXPPROP;
		m_Name = "EXPPROP";
		break;
	case TOGOLD:
		m_Abv = GOLDPROP;
		m_Name = "GOLDPROP";
		break;
	}
	// 坐标
	Vec2 m_Pos;
}


short Goods::GetAbv() {
	return this->m_Abv;
}

void  Goods::SetAbv(short Abv) {
	this->m_Abv = Abv;
}
