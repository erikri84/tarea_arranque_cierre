#pragma once
#include <iostream>
class AnimtionManager
{
public:
	AnimtionManager() {}
	~AnimtionManager() {}
	void startUp() { std::cout << "AnimtionManager Arrancado\n"; }
	void shutDown() { std::cout << "AnimtionManager Cerrado\n"; }
};