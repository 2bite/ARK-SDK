#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvern_AIController_BP_Aggressive_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CrystalWyvern_AIController_BP_Aggressive.CrystalWyvern_AIController_BP_Aggressive_C
// 0x0000 (0x0919 - 0x0919)
class ACrystalWyvern_AIController_BP_Aggressive_C : public ACrystalWyvern_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvern_AIController_BP_Aggressive.CrystalWyvern_AIController_BP_Aggressive_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CrystalWyvern_AIController_BP_Aggressive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
