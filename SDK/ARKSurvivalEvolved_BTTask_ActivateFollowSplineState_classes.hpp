#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTTask_ActivateFollowSplineState_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTTask_ActivateFollowSplineState.BTTask_ActivateFollowSplineState_C
// 0x0013 (0x008B - 0x0078)
class UBTTask_ActivateFollowSplineState_C : public UBTTask_BlueprintBase
{
public:
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x0078(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADragon_AIController_Bp_C*                   K2Node_DynamicCast_AsDragon_AIController_Bp_C;            // 0x0080(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0088(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CalculateAndSetWonderingAIState_StateChanged;    // 0x0089(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CalculateAndSetWonderingAIState_ReturnValue;     // 0x008A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_ActivateFollowSplineState.BTTask_ActivateFollowSplineState_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_BTTask_ActivateFollowSplineState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
