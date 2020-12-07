#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_StunDesertKaiju_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_StunDesertKaiju.Task_StunDesertKaiju_C
// 0x0068 (0x00E0 - 0x0078)
class UTask_StunDesertKaiju_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      BBKey_Stunned;                                            // 0x0078(0x0028) (Edit, BlueprintVisible)
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADesertKaiju_AIController_BP_C*              K2Node_DynamicCast_AsDesertKaiju_AIController_BP_C;       // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x00B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_GetControllerPawn_ReturnValue;                   // 0x00B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADesertKaiju_Character_BP_C*                 K2Node_DynamicCast_AsDesertKaiju_Character_BP_C;          // 0x00C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x00C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue;                   // 0x00D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x00D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x00DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_StunDesertKaiju.Task_StunDesertKaiju_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_StunDesertKaiju(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
