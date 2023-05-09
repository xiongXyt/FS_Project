#include"Vec2.h"

const Vec2 Vec2::UP = Vec2(-1, 0);
const Vec2 Vec2::DOWN = Vec2(1, 0);
const Vec2 Vec2::LEFT = Vec2(0, -1);
const Vec2 Vec2::RIGHT = Vec2(0, 1);

Vec2::Vec2() {
	m_X = 0;
	m_Y = 0;
}

Vec2::Vec2(short x, short y) {
	this->m_X = x;
	this->m_Y = y;
}

//Vec2::~Vec2() {
//
//}

short Vec2::GetX() const {
	return this->m_X;
}

short Vec2::GetY() const {
	return this->m_Y;
}

Vec2 Vec2::GetXY() const {
	return *this;
}

Vec2 Vec2::operator+(const Vec2& other) {
	return Vec2(this->m_X + other.m_X, this->m_Y + other.m_Y);
}
