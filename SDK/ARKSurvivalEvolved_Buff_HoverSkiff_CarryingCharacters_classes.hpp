#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HoverSkiff_CarryingCharacters_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_HoverSkiff_CarryingCharacters.Buff_HoverSkiff_CarryingCharacters_C
// 0x0000 (0x0978 - 0x0978)
class ABuff_HoverSkiff_CarryingCharacters_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_HoverSkiff_CarryingCharacters.Buff_HoverSkiff_CarryingCharacters_C");
		return ptr;
	}


	bool BPPreventRunning();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_HoverSkiff_CarryingCharacters(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
