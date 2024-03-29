#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_GetNearestZiplineAttachPointForTarget_TK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Zipline_GetNearestZiplineAttachPointForTarget_TK.Zipline_GetNearestZiplineAttachPointForTarget_TK_C
// 0x00D0 (0x0148 - 0x0078)
class UZipline_GetNearestZiplineAttachPointForTarget_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      NavTargetKey;                                             // 0x0078(0x0028) (Edit, BlueprintVisible)
	float                                              AttachDistance;                                           // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class APawn*                                       Pawn;                                                     // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APrimalBuff*                                 TargetBuff;                                               // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FindGroundLocationStepDistance;                           // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      AttachTargetPointKey;                                     // 0x00C0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00E8(0x0028) (Edit, BlueprintVisible)
	float                                              MinDistanceToGround;                                      // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x0118(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore2_RefProperty; // 0x0128(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore3_RefProperty; // 0x0138(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Zipline_GetNearestZiplineAttachPointForTarget_TK.Zipline_GetNearestZiplineAttachPointForTarget_TK_C");
		return ptr;
	}


	void FindAttachLocation(struct FVector* GroundLocation, struct FVector* AttachLocation);
	void STATIC_ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Zipline_GetNearestZiplineAttachPointForTarget_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
