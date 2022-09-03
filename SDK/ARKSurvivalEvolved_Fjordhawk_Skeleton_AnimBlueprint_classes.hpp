#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Fjordhawk_Skeleton_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Fjordhawk_Skeleton_AnimBlueprint.Fjordhawk_Skeleton_AnimBlueprint_C
// 0x0004 (0x130C - 0x1308)
class UFjordhawk_Skeleton_AnimBlueprint_C : public UDinoBlueprintBase_RootTransform_FlySwimming_C
{
public:
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x1308(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Fjordhawk_Skeleton_AnimBlueprint.Fjordhawk_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Fjordhawk_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
