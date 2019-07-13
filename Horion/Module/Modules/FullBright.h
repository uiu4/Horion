#pragma once
#include "Module.h"
class FullBright :
	public IModule
{
public:
	float* gammaPtr = nullptr;
	FullBright();
	~FullBright();

	// Inherited via IModule
	virtual const char* getModuleName() override;
	virtual void onEnable() override;
	virtual void onDisable() override;
};

