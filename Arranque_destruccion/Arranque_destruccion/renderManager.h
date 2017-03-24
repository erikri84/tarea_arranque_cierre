#pragma once
#include <iostream>
class RenderManager
{
public:
	RenderManager() {}
	~RenderManager() {}
	void startUp(){std::cout << "RenderManager Arrancado\n"; }
	void shutDown(){std::cout << "RenderManager Cerrado\n"; }
};