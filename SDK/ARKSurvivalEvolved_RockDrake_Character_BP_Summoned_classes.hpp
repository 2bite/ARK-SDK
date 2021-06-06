#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RockDrake_Character_BP_Summoned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RockDrake_Character_BP_Summoned.RockDrake_Character_BP_Summoned_C
// 0x0000 (0x3958 - 0x3958)
class ARockDrake_Character_BP_Summoned_C : public ARockDrake_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RockDrake_Character_BP_Summoned.RockDrake_Character_BP_Summoned_C");
		return ptr;
	}


	void Can_Use_Camo(bool* isForStart, bool* Result);
	void UserConstructionScript();
	void ExecuteUbergraph_RockDrake_Character_BP_Summoned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
