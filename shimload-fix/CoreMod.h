#pragma once

#include <vector>
#include <SDK/Engine_classes.hpp>
using namespace SDK;

class CoreMod
{
public:
	virtual std::string QueryModName() = 0;
	virtual void OnLoadMod() = 0;
	virtual void OnLevelChange(UWorld* World) = 0;
};
using CreateCoreModFunc = CoreMod * (*)();

static std::vector<CoreMod*> CoreModList;