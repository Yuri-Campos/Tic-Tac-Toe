 #pragma once
class Player {
public:
	Player(char icon, int score);
	void updateScore(int point);
	char getIcon();

private:
	char _icon{};
	int _score{};
};