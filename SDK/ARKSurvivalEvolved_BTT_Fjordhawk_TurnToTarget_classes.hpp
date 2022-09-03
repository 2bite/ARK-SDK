#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_Fjordhawk_TurnToTarget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTT_Fjordhawk_TurnToTarget.BTT_Fjordhawk_TurnToTarget_C
// 0x0039 (0x00B1 - 0x0078)
class UBTT_Fjordhawk_TurnToTarget_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x0078(0x0028) (Edit, BlueprintVisible)
	class UAnimMontage*                                turnAnim;                                                 // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SuccessAngle;                                             // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForceMoveAtCompletion;                                    // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_Fjordhawk_TurnToTarget.BTT_Fjordhawk_TurnToTarget_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_BTT_Fjordhawk_TurnToTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
