#include"Monster.h"

Monster::Monster(short MapNum) {
	if (LITTLE_MONSTER == MapNum) {
		this->m_Att = 20;
		this->m_Def = 20;
		this->m_Hp = 400;
		this->m_Lv = 1;
		this->m_Name = "小怪物";
	}
	else if (MIDDLE_MONSTER == MapNum) {
		this->m_Att = 40;
		this->m_Def = 40;
		this->m_Hp = 800;
		this->m_Lv = 2;
		this->m_Name = "中等怪物";
	}
	else if (BIG_MONSTER == MapNum) {
		this->m_Att = 20;
		this->m_Def = 20;
		this->m_Hp = 400;
		this->m_Lv = 1;
		this->m_Name = "大怪物";
	}
	else if (BOSS_MONSTER == MapNum) {
		this->m_Att = 20;
		this->m_Def = 20;
		this->m_Hp = 400;
		this->m_Lv = 1;
		this->m_Name = "最终BOSS";
	}
	else {  // 默认值是小怪物
		this->m_Att = 20;
		this->m_Def = 20;
		this->m_Hp = 400;
		this->m_Lv = 1;
		this->m_Name = "小怪物";
	}
}

Monster::~Monster() {

}
