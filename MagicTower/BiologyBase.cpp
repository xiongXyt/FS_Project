#include"BiologyBase.h"


void BiologyBase::render() {
	cout << "********************" << endl; // 20
	cout << "** ������   " << this->m_Name << "    **" << endl;
	cout << "** �ȼ���   " << this->m_Lv << "     **" << endl;
	cout << "** Ѫ����   " << this->m_Hp << "  **" << endl;
	cout << "** ������   " << this->m_Att << "     **" << endl;
	cout << "** ������   " << this->m_Def << "     **" << endl;
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
