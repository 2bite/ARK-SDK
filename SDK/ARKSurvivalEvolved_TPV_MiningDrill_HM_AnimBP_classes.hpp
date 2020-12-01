#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TPV_MiningDrill_HM_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TPV_MiningDrill_HM_AnimBP.TPV_MiningDrill_HM_AnimBP_C
// 0x0004 (0x3A18 - 0x3A14)
class UTPV_MiningDrill_HM_AnimBP_C : public UTPV_Spear_HM_AnimBP_C
{
public:
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x3A14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_MiningDrill_HM_AnimBP.TPV_MiningDrill_HM_AnimBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_TPV_MiningDrill_HM_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
