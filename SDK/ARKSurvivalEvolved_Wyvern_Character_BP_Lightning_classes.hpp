#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_Character_BP_Lightning_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Wyvern_Character_BP_Lightning.Wyvern_Character_BP_Lightning_C
// 0x000C (0x23CC - 0x23C0)
class AWyvern_Character_BP_Lightning_C : public AWyvern_Character_BP_Base_C
{
public:
	struct FVector                                     TargetAimOffset;                                          // 0x23C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wyvern_Character_BP_Lightning.Wyvern_Character_BP_Lightning_C");
		return ptr;
	}


	struct FVector BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation);
	void UserConstructionScript();
	void ExecuteUbergraph_Wyvern_Character_BP_Lightning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
