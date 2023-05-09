#include"BiologyBase.h"


void BiologyBase::render() {
	cout << "********************" << endl; // 20
	cout << "** 姓名：   " << this->m_Name << "    **" << endl;
	cout << "** 等级：   " << this->m_Lv << "     **" << endl;
	cout << "** 血量：   " << this->m_Hp << "  **" << endl;
	cout << "** 攻击：   " << this->m_Att << "     **" << endl;
	cout << "** 防御：   " << this->m_Def << "     **" << endl;
	cout << "********************" << endl;
}

void BiologyBase::SetHp(short Hp) {
	this->m_Hp = Hp;
}

void BiologyBase::SetAtt(short Att) {
	this->m_Att = Att;
}

void BiologyBase::SetDef(short Def) {
	this->m_Def = Def;
}

short BiologyBase::GetHp()const {
	return this->m_Hp;
}

short BiologyBase::GetAtt()const {
	return this->m_Att;
}

short BiologyBase::GetDef()const {
	return this->m_Def;
}
