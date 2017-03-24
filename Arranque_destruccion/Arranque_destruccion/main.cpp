#include "renderManager.h"
#include "PhysicsManager.h"
#include "AnimationManager.h"
#include "MemoryManager.h"

RenderManager gRenderManager;
PhysicsManager gPhysicsManager;
AnimtionManager gAnimationManager;
MemoryManager gMemoryManager;

void main()
{
	gRenderManager.startUp();
	gPhysicsManager.startUp();
	gAnimationManager.startUp();
	gMemoryManager.startUp();
	for (int i = 0; i < 2; i++)
		std::cout << "RUNING GAME\n";

	gRenderManager.shutDown();
	gPhysicsManager.shutDown();
	gAnimationManager.shutDown();
	gMemoryManager.shutDown();
	getchar();
}