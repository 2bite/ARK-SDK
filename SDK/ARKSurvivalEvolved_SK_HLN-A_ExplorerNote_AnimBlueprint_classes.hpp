#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_HLN-A_ExplorerNote_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SK_HLN-A_ExplorerNote_AnimBlueprint.SK_HLN-A_ExplorerNote_AnimBlueprint_C
// 0x0007 (0x04F0 - 0x04E9)
class USK_HLN_A_ExplorerNote_AnimBlueprint_C : public UBaseNoteMeshAnimBP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x04E9(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x04EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_HLN-A_ExplorerNote_AnimBlueprint.SK_HLN-A_ExplorerNote_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SK_HLN_A_ExplorerNote_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
