#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_gliderPackFemale_wings_AnimBlueprint_FPV_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SK_gliderPackFemale_wings_AnimBlueprint_FPV.SK_gliderPackFemale_wings_AnimBlueprint_FPV_C
// 0x0013 (0x0935 - 0x0922)
class USK_gliderPackFemale_wings_AnimBlueprint_FPV_C : public USK_gliderPackFemale_wings_AnimBlueprint_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0922(0x0006) MISSED OFFSET
	class USkeletalMeshComponent*                      CallFunc_GetOwningComponent_ReturnValue;                  // 0x0928(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0930(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0934(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_gliderPackFemale_wings_AnimBlueprint_FPV.SK_gliderPackFemale_wings_AnimBlueprint_FPV_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SK_gliderPackFemale_wings_AnimBlueprint_FPV(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
