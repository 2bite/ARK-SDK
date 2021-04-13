#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_Character_BP_Fire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Wyvern_Character_BP_Fire.Wyvern_Character_BP_Fire_C
// 0x0000 (0x22D0 - 0x22D0)
class AWyvern_Character_BP_Fire_C : public AWyvern_Character_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wyvern_Character_BP_Fire.Wyvern_Character_BP_Fire_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Wyvern_Character_BP_Fire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
