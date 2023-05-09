#ifndef _GAME_H_
#define _GAME_H_
#include <conio.h>
#include<Windows.h>
#include "GameMap.h"
#include "Hero.h"
#include"Monster.h"
#include"Goods.h"

/*
数据成员：地图，英雄，怪物，物品
行为：初始化游戏，渲染，监听输入
*/

class Game {
private:
	GameMap m_gameMap;
	Hero m_hero;
public:
	// 初始化
	void GameInit();
	// 渲染
	void GameRender();
	// 监听输入
	void KeyboardListener();
	// 更新地图
	void GameUpdate();
};

#endif // !_GAME_H_
