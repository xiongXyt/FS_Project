#ifndef _VECTWO_H_
#define _VECTWO_H_

/*
数据：X轴，Y轴
行为：获取坐标，设置坐标
*/

class Vec2 {
private:
	short m_X;
	short m_Y;
public:
	Vec2();
	Vec2(short x, short y);
	//~Vec2();

	short GetX()const;
	short GetY()const;
	Vec2 GetXY()const;

	// 重载 + 运算符
	Vec2 operator+(const Vec2& other);

	// 预定义对象
	static const Vec2 UP;
	static const Vec2 DOWN;
	static const Vec2 LEFT;
	static const Vec2 RIGHT;
};

#endif // !_VECTWO_H_
