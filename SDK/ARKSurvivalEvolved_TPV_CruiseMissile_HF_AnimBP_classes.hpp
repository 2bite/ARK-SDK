#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TPV_CruiseMissile_HF_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TPV_CruiseMissile_HF_AnimBP.TPV_CruiseMissile_HF_AnimBP_C
// 0x0004 (0x3B70 - 0x3B6C)
class UTPV_CruiseMissile_HF_AnimBP_C : public UTPV_Female_NoWeapon_AnimBlueprint_C
{
public:
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x3B6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_CruiseMissile_HF_AnimBP.TPV_CruiseMissile_HF_AnimBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_TPV_CruiseMissile_HF_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
