#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dragon_AIController_Bp_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dragon_AIController_Bp.Dragon_AIController_Bp_C
// 0x0059 (0x0909 - 0x08B0)
class ADragon_AIController_Bp_C : public APrimalDinoAIController
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackLandTime;                                           // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackLandInterval;                                       // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StasisOverrideRadius;                                     // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                mCurrentWanderState;                                      // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSplineWandering;                                      // 0x08C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldScream;                                            // 0x08C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x08CA(0x0002) MISSED OFFSET
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue;                     // 0x08CC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue2;                    // 0x08D4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08DC(0x0004) MISSED OFFSET
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x08E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x08E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08E9(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue3;                    // 0x08EC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAttackInterval_ReturnValue;                   // 0x08F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAttackRotationRangeDegrees_ReturnValue;       // 0x08F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x08FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x08FD(0x0003) MISSED OFFSET
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue;                       // 0x0900(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_RunBehaviorTree_ReturnValue;                     // 0x0908(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dragon_AIController_Bp.Dragon_AIController_Bp_C");
		return ptr;
	}


	void OnLosingTargetEvent();
	void ReceiveTick(float* DeltaSeconds);
	void ShouldStayOnLand(bool* Return);
	void IsUsingSpline(bool* Return);
	bool CalculateAndSetWonderingAIStateEvent(bool* StateChanged);
	void OnPossess(class APawn** PossessedPawn);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Dragon_AIController_Bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
