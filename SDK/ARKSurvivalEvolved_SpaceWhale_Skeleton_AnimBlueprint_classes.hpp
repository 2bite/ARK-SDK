#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceWhale_Skeleton_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C
// 0x0038 (0x1C00 - 0x1BC8)
class USpaceWhale_Skeleton_AnimBlueprint_C : public UDinoBlueprintBase_RootTransform_FlyStrafing_C
{
public:
	struct FRotator                                    DesiredRot;                                               // 0x1BC8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1BD4(0x0004) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x1BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x1BE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1BE4(0x0004) MISSED OFFSET
	class ASpaceWhale_Character_BP_C*                  K2Node_DynamicCast_AsSpaceWhale_Character_BP_C;           // 0x1BE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1BF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1BF1(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_RInterpTo_ReturnValue;                           // 0x1BF4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void STATIC_GetFlyingBlendspaceCoords(class APrimalDinoCharacter** ForDino, struct FVector2D* BlendspaceCoords);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SpaceWhale_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
