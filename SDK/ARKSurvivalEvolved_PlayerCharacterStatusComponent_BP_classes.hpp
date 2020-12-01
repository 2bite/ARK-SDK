#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlayerCharacterStatusComponent_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C
// 0x0000 (0x1090 - 0x1090)
class UPlayerCharacterStatusComponent_BP_C : public UPrimalPlayerStatusComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C");
		return ptr;
	}


	float BPModifyMaxExperiencePoints(float* InMaxExperiencePoints);
	int BPModifyMaxLevel(int* InMaxLevel);
	void ExecuteUbergraph_PlayerCharacterStatusComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
