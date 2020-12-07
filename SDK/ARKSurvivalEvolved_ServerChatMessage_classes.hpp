#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ServerChatMessage_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ServerChatMessage.ServerChatMessage_C
// 0x0000 (0x0570 - 0x0570)
class UServerChatMessage_C : public UUI_ServerBroadcastMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ServerChatMessage.ServerChatMessage_C");
		return ptr;
	}


	void ExecuteUbergraph_ServerChatMessage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
