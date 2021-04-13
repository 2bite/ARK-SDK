#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Piranha_Character_BP_BreakNet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Piranha_Character_BP_BreakNet.Piranha_Character_BP_BreakNet_C
// 0x0000 (0x21A0 - 0x21A0)
class APiranha_Character_BP_BreakNet_C : public APiranha_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Piranha_Character_BP_BreakNet.Piranha_Character_BP_BreakNet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Piranha_Character_BP_BreakNet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
