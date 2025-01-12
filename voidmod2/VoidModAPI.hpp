#include "SDK/Engine_classes.hpp"
#include "SDK/MainGamemode_classes.hpp"

using namespace SDK;

static class VoidMod
{
public:
	/* Only to be called directly from the ML. */
	static void Setup();

	static void Hint(std::string msg, Enum_notifyType type);
	static bool IsValid(UObject* obj);
	
	/* Strings */
	static FText Conv_StringToFText(std::string str);
	static FString Conv_StringToFString(std::string str);
	static FName Conv_StringToFName(std::string str);
};