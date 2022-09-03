#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvern_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C
// 0x0000 (0x0919 - 0x0919)
class ACrystalWyvern_AIController_BP_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C");
		return ptr;
	}


	bool BPShouldNotifyAnyNeighbor(class APrimalDinoCharacter** neighbor);
	struct FVector2D BP_TamedOverrideHorizontalLandingRange();
	void UserConstructionScript();
	void ExecuteUbergraph_CrystalWyvern_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
