#include "VoidModAPI.hpp"

UWorld* World = nullptr;
AMainGamemode_C* MainGamemode = nullptr;

void VoidMod::Setup()
{
	World = SDK::UWorld::GetWorld();
	MainGamemode = static_cast<AMainGamemode_C*>(World->FindObjectFast("mainGamemode_C"));
}

bool VoidMod::IsValid(UObject* obj)
{
	if (!obj)
		return false;

	try
	{
		if (!obj->GetName().empty())
			return true;
	}
	catch (...)
	{
		return false;
	}
	return true;
}

void VoidMod::Hint(std::string msg, Enum_notifyType type)
{
	if (!IsValid(MainGamemode))
		return;

	MainGamemode->AddHint(VoidMod::Conv_StringToFText(msg), type);
}

FText VoidMod::Conv_StringToFText(std::string str)
{
	FString middleman = Conv_StringToFString(str);
	return UKismetTextLibrary::Conv_StringToText(middleman);
}

FString VoidMod::Conv_StringToFString(std::string str)
{
	int bufferSize = MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, NULL, 0);
	wchar_t* wcharStr = new wchar_t[bufferSize];
	MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, wcharStr, bufferSize);

	return (SDK::FString)wcharStr;
}

FName VoidMod::Conv_StringToFName(std::string str)
{
	return SDK::UKismetStringLibrary::Conv_StringToName(Conv_StringToFString(str));
}
