#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvern_Character_BP_Blood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CrystalWyvern_Character_BP_Blood.CrystalWyvern_Character_BP_Blood_C
// 0x0000 (0x2470 - 0x2470)
class ACrystalWyvern_Character_BP_Blood_C : public ACrystalWyvern_Character_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvern_Character_BP_Blood.CrystalWyvern_Character_BP_Blood_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CrystalWyvern_Character_BP_Blood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
