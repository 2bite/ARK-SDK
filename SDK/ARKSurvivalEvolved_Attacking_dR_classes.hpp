#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Attacking_dR_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Attacking_dR.Attacking_DR_C
// 0x0051 (0x00E1 - 0x0090)
class UAttacking_DR_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      WithinAttackRangeKey;                                     // 0x0090(0x0028) (Edit, BlueprintVisible)
	class AActor*                                      K2Node_Event_OwnerActor3;                                 // 0x00B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_OwnerActor2;                                 // 0x00C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EBTNodeResult>                         K2Node_Event_NodeResult;                                  // 0x00C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x00D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x00E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Attacking_dR.Attacking_DR_C");
		return ptr;
	}


	void ReceiveExecutionStart(class AActor** OwnerActor);
	void ReceiveExecutionFinish(class AActor** OwnerActor, TEnumAsByte<EBTNodeResult>* NodeResult);
	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_Attacking_DR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
