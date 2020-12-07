#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_IsTargetNearZipline_DR_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CaveWolf_IsTargetNearZipline_DR.CaveWolf_IsTargetNearZipline_DR_C
// 0x00D0 (0x0160 - 0x0090)
class UCaveWolf_IsTargetNearZipline_DR_C : public UBTDecorator_BlueprintBase
{
public:
	float                                              TargetZiplineSearchRadius;                                // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	TArray<class AActor*>                              ZiplinesNearTarget;                                       // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              ZiplineSearchRadius;                                      // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class AZipline_Anchor_C*                           NewTargetAnchor;                                          // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      NewTargetAnchorKey;                                       // 0x00B8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      NewTargetLocationKey;                                     // 0x00E0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      NewTargetJumpOffLocation;                                 // 0x0108(0x0028) (Edit, BlueprintVisible)
	float                                              MinDistanceToTarget;                                      // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x0138(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CaveWolf_IsTargetNearZipline_DR.CaveWolf_IsTargetNearZipline_DR_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_CaveWolf_IsTargetNearZipline_DR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
