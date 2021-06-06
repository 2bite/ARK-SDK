#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_DKaijuFindMovePointWithinArena_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C
// 0x0090 (0x0108 - 0x0078)
class UTask_DKaijuFindMovePointWithinArena_C : public UBTTask_BlueprintBase
{
public:
	class ADesertKaiju_Character_BP_C*                 MyDK;                                                     // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      CenterArenaLoc;                                           // 0x0080(0x0028) (Edit, BlueprintVisible)
	float                                              MinHoverRange;                                            // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHoverRange;                                            // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      MoveLoc;                                                  // 0x00B0(0x0028) (Edit, BlueprintVisible)
	float                                              MoveRadius;                                               // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UseMinDist;                                               // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceStartLoc;                                            // 0x00E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	class ADesertKaiju_AIController_BP_C*              MYAIC;                                                    // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x00F8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C");
		return ptr;
	}


	void Get_Random_PointNoMin(const struct FVector& Origin, struct FVector* Return);
	void Get_Random_PointMin(const struct FVector& Origin, struct FVector* Return, bool* DidNotFindLoc);
	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_DKaijuFindMovePointWithinArena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
