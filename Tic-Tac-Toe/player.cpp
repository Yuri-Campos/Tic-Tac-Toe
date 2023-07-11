#include "Player.h"

Player::Player(char icon, int score) {
	_icon = icon;
	_score = score;
}

void Player::updateScore(int point) {
	_score += point;
}

char Player::getIcon() {
	return _icon;
}