#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_gliderPack_wings_AnimBlueprint_FPV_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SK_gliderPack_wings_AnimBlueprint_FPV.SK_gliderPack_wings_AnimBlueprint_FPV_C
// 0x0023 (0x0949 - 0x0926)
class USK_gliderPack_wings_AnimBlueprint_FPV_C : public USK_gliderPack_wings_AnimBlueprint_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0926(0x0002) MISSED OFFSET
	float                                              MaxGliderOffset_Y;                                        // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GliderMeshRollScale;                                      // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxGliderOffset_Z;                                        // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0934(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0938(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0939(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      CallFunc_GetOwningComponent_ReturnValue;                  // 0x0940(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0948(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_gliderPack_wings_AnimBlueprint_FPV.SK_gliderPack_wings_AnimBlueprint_FPV_C");
		return ptr;
	}


	void UpdateWingOffsets(class AShooterCharacter** ShooterCharacter);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_FPV(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
