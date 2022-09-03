#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HM_Hoversail_Riding_AnimBP_HF_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass HM_Hoversail_Riding_AnimBP_HF.HM_Hoversail_Riding_AnimBP_HF_C
// 0x0004 (0x15D0 - 0x15CC)
class UHM_Hoversail_Riding_AnimBP_HF_C : public UHM_Hoversail_Riding_AnimBP_C
{
public:
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x15CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass HM_Hoversail_Riding_AnimBP_HF.HM_Hoversail_Riding_AnimBP_HF_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_HM_Hoversail_Riding_AnimBP_HF(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
