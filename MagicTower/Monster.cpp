#include"Monster.h"

Monster::Monster(short MapNum) {
	if (LITTLE_MONSTER == MapNum) {
		this->m_Att = 20;
		this->m_Def = 20;
		this->m_Hp = 400;
		this->m_Lv = 1;
		this->m_Name = "С����";
	}
	else if (MIDDLE_MONSTER == MapNum) {
		this->m_Att = 40;
		this->m_Def = 40;
		this->m_Hp = 800;
		this->m_Lv = 2;
		this->m_Name = "�еȹ���";
	}
	else if (BIG_MONSTER == MapNum) {
		this->m_Att = 20;
		this->m_Def = 20;
		this->m_Hp = 400;
		this->m_Lv = 1;
		this->m_Name = "�����";
	}
	else if (BOSS_MONSTER == MapNum) {
		this->m_Att = 20;
		this->m_Def = 20;
		this->m_Hp = 400;
		this->m_Lv = 1;
		this->m_Name = "����BOSS";
	}
	else {  // Ĭ��ֵ��С����
		this->m_Att = 20;
		this->m_Def = 20;
		this->m_Hp = 400;
		this->m_Lv = 1;
		this->m_Name = "С����";
	}
}

Monster::~Monster() {

}
