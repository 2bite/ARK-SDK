#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TPV_FishingNet_HF_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TPV_FishingNet_HF_AnimBlueprint.TPV_FishingNet_HF_AnimBlueprint_C
// 0x0004 (0x3B70 - 0x3B6C)
class UTPV_FishingNet_HF_AnimBlueprint_C : public UTPV_Female_NoWeapon_AnimBlueprint_C
{
public:
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x3B6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_FishingNet_HF_AnimBlueprint.TPV_FishingNet_HF_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_TPV_FishingNet_HF_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
