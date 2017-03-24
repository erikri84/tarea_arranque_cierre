#pragma once
#pragma once
#include <iostream>
class MemoryManager
{
public:
	MemoryManager() {}
	~MemoryManager() {}
	void startUp() { std::cout << "MemoryManager Arrancado\n"; }
	void shutDown() { std::cout << "MemoryManager Cerrado\n"; }
};