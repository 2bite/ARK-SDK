#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TPV_Male_Drums_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TPV_Male_Drums_AnimBP.TPV_Male_Drums_AnimBP_C
// 0x0004 (0x3B70 - 0x3B6C)
class UTPV_Male_Drums_AnimBP_C : public UBaseHumanAnimBP_Fists_C
{
public:
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x3B6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_Male_Drums_AnimBP.TPV_Male_Drums_AnimBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_TPV_Male_Drums_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
