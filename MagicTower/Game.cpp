#include"Game.h"

void Game::GameInit() {
	m_hero.SetHeroPosition(m_gameMap.GetPositionOfHero());
}

void Game::GameRender() {
	system("CLS");
	// 渲染英雄信息
	m_hero.HeroRender();
	// 渲染整个地图信息
	m_gameMap.GameMapRender();
	GameUpdate();
}

void Game::KeyboardListener() {
	char signal = _getch();  // 无阻塞输入
	Vec2 dir;
	switch (signal) {
	case 'w':
	case 'W':
		dir = Vec2::UP;
		break;
	case 's':
	case 'S':
		dir = Vec2::DOWN;
		break;
	case 'a':
	case 'A':
		dir = Vec2::LEFT;
		break;
	case 'd':
	case 'D':
		dir = Vec2::RIGHT;
		break;
	}
	Vec2 nextPos = dir + m_hero.GetHeroPosition();
	MAPELEMENT element = m_gameMap.GetElementOfPos(nextPos);


	switch (element) {
	case ROAD: {  // 空地
		// 修改地图
		m_gameMap.UpdateElementOfPos(nextPos, HERO);  // 下一个位置
		m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // 当前位置

		// 更新英雄位置
		m_hero.SetHeroPosition(nextPos);
		break;
	}

	case UP: {  // 上楼梯
		// 更换下一张地图
		m_gameMap.GoUpstairs();
		m_hero.SetHeroPosition(m_gameMap.GetPositionOfHero());
		break;
	}

	case DOWN: {  // 下楼梯
		// 更换上一张地图
		m_gameMap.GoDown();
		m_hero.SetHeroPosition(m_gameMap.GetPositionOfHero());
		break;
	}

	case LITTLE_MONSTER: {  // 小怪物
		// 初始化小怪物
		Monster littleMonster(element);
		int num = 0;

		// 英雄和怪物进行战斗，不死不休
		// 英雄上去战斗
		if (this->m_hero.Attack(littleMonster)) {
			cout << "胜利" << endl;
			cout << "请安任意键确定" << endl;
			char determine = _getch();

			// 向前走
			m_gameMap.UpdateElementOfPos(nextPos, HERO);  // 下一个位置
			m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // 当前位置
			// 更新英雄位置
			m_hero.SetHeroPosition(nextPos);
		}
		else {
			cout << "打不赢" << endl;
			//  游戏结束
			exit(0);
		}
		break;
	}

	case MIDDLE_MONSTER: {  // 中等怪物
		// 初始化中等怪物
		Monster MiddleMonster(element);

		// 英雄和怪物进行战斗，不死不休
		// 英雄上去战斗
		if (this->m_hero.Attack(MiddleMonster)) {
			cout << "胜利" << endl;
			cout << "请安任意键确定" << endl;
			char determine = _getch();

			// 向前走
			m_gameMap.UpdateElementOfPos(nextPos, HERO);  // 下一个位置
			m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // 当前位置
			// 更新英雄位置
			m_hero.SetHeroPosition(nextPos);
		}
		else {
			cout << "打不赢" << endl;
			//  游戏结束
			exit(0);
		}
		break;
	}

	case BIG_MONSTER: {  // 大怪物
		// 初始化大怪物
		Monster BigMonster(element);

		// 英雄和怪物进行战斗，不死不休
		// 英雄上去战斗
		if (this->m_hero.Attack(BigMonster)) {
			cout << "胜利" << endl;
			cout << "请安任意键确定" << endl;
			char determine = _getch();

			// 向前走
			m_gameMap.UpdateElementOfPos(nextPos, HERO);  // 下一个位置
			m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // 当前位置
			// 更新英雄位置
			m_hero.SetHeroPosition(nextPos);
		}
		else {
			cout << "打不赢" << endl;
			//  游戏结束
			exit(0);
		}
		break;
	}

	case BOSS_MONSTER: {  // 最终Boss这里标志着游戏胜利 flag = true
		// 初始化BOSS怪物
		Monster BossMonster(element);

		// 英雄和怪物进行战斗，不死不休
		// 英雄上去战斗
		if (this->m_hero.Attack(BossMonster)) {
			cout << "胜利" << endl;
			cout << "请安任意键确定" << endl;
			char determine = _getch();

			// 向前走
			m_gameMap.UpdateElementOfPos(nextPos, HERO);  // 下一个位置
			m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // 当前位置
			// 更新英雄位置
			m_hero.SetHeroPosition(nextPos);
		}
		else {
			cout << "打不赢" << endl;
			//  游戏结束
			exit(0);
		}
		break;
	}

	case TOHP: {  // 加血量物品
		Goods fromHP(element);
		m_hero.SetHp(m_hero.GetHp() + fromHP.GetAbv());

		// 向前走
		m_gameMap.UpdateElementOfPos(nextPos, HERO);  // 下一个位置
		m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // 当前位置
		// 更新英雄位置
		m_hero.SetHeroPosition(nextPos);
		break;
	}

	case TOATT: {  // 加攻击物品
		Goods fromATT(element);
		m_hero.SetHp(m_hero.GetAtt() + fromATT.GetAbv());

		// 向前走
		m_gameMap.UpdateElementOfPos(nextPos, HERO);  // 下一个位置
		m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // 当前位置
		// 更新英雄位置
		m_hero.SetHeroPosition(nextPos);
		break;
	}

	case TODEF: {  // 加防御物品
		Goods fromDEF(element);
		m_hero.SetHp(m_hero.GetDef() + fromDEF.GetAbv());

		// 向前走
		m_gameMap.UpdateElementOfPos(nextPos, HERO);  // 下一个位置
		m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // 当前位置
		// 更新英雄位置
		m_hero.SetHeroPosition(nextPos);
		break;
	}

	case TOEXP: {  // 加经验物品
		Goods fromEXP(element);
		m_hero.SetHp(m_hero.GetExp() + fromEXP.GetAbv());

		// 向前走
		m_gameMap.UpdateElementOfPos(nextPos, HERO);  // 下一个位置
		m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // 当前位置
		// 更新英雄位置
		m_hero.SetHeroPosition(nextPos);
		break;
	}
	case TOGOLD: {
		Goods fromGOLD(element);
		m_hero.SetHp(m_hero.GetGold() + fromGOLD.GetAbv());

		// 向前走
		m_gameMap.UpdateElementOfPos(nextPos, HERO);  // 下一个位置
		m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // 当前位置
		// 更新英雄位置
		m_hero.SetHeroPosition(nextPos);
		break;
	}
	}
}

void Game::GameUpdate() {
	KeyboardListener();
}

