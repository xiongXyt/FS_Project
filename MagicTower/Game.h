#ifndef _GAME_H_
#define _GAME_H_
#include <conio.h>
#include<Windows.h>
#include "GameMap.h"
#include "Hero.h"
#include"Monster.h"
#include"Goods.h"

/*
���ݳ�Ա����ͼ��Ӣ�ۣ������Ʒ
��Ϊ����ʼ����Ϸ����Ⱦ����������
*/

class Game {
private:
	GameMap m_gameMap;
	Hero m_hero;
public:
	// ��ʼ��
	void GameInit();
	// ��Ⱦ
	void GameRender();
	// ��������
	void KeyboardListener();
	// ���µ�ͼ
	void GameUpdate();
};

#endif // !_GAME_H_
