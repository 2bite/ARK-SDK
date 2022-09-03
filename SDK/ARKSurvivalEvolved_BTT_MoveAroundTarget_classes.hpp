#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_MoveAroundTarget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTT_MoveAroundTarget.BTT_MoveAroundTarget_C
// 0x0040 (0x00B8 - 0x0078)
class UBTT_MoveAroundTarget_C : public UBTTask_BlueprintBase
{
public:
	TArray<struct FVector>                             NavLocs;                                                  // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NumPointsAround;                                          // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentMoveIndex;                                         // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      CompletedMoves;                                           // 0x0090(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_MoveAroundTarget.BTT_MoveAroundTarget_C");
		return ptr;
	}


	void GetPointsAroundTarget(float Direction, const struct FVector& StartLoc, const struct FVector& EndLoc);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_BTT_MoveAroundTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
