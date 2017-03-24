#pragma once
#include <iostream>
class PhysicsManager
{
public:
	PhysicsManager() {}
	~PhysicsManager() {}
	void startUp() { std::cout << "PhysicsManager Arrancado\n"; }
	void shutDown() { std::cout << "PhysicsManager Cerrado\n"; }
};