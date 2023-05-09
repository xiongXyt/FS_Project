#include"Goods.h"

Goods::Goods(MAPELEMENT element) {
	m_Element = element;  // ��ͼ���
	switch (element) {
	case TOHP:  // ��Ѫ����
		m_Abv = HPPROP;
		m_Name = "HPPROP";
		break;
	case TOATT:  // �ӹ�������
		m_Abv = ATTPROP;
		m_Name = "ATTPROP";
		break;
	case TODEF:  // �ӷ�������
		m_Abv = DEFPROP;
		m_Name = "DEFPROP";
		break;
	case TOEXP:  // �Ӿ������
		m_Abv = EXPPROP;
		m_Name = "EXPPROP";
		break;
	case TOGOLD:
		m_Abv = GOLDPROP;
		m_Name = "GOLDPROP";
		break;
	}
	// ����
	Vec2 m_Pos;
}


short Goods::GetAbv() {
	return this->m_Abv;
}

void  Goods::SetAbv(short Abv) {
	this->m_Abv = Abv;
}
