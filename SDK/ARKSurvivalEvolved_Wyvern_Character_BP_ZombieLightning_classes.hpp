#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_Character_BP_ZombieLightning_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Wyvern_Character_BP_ZombieLightning.Wyvern_Character_BP_ZombieLightning_C
// 0x000E (0x238C - 0x237E)
class AWyvern_Character_BP_ZombieLightning_C : public AWyvern_Character_BP_ZombieBase_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x237E(0x0002) MISSED OFFSET
	struct FVector                                     TargetAimOffset;                                          // 0x2380(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wyvern_Character_BP_ZombieLightning.Wyvern_Character_BP_ZombieLightning_C");
		return ptr;
	}


	struct FVector BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation);
	void UserConstructionScript();
	void ExecuteUbergraph_Wyvern_Character_BP_ZombieLightning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
