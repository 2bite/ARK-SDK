#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_FKaijuProtect_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_FKaijuProtect.Task_FKaijuProtect_C
// 0x0089 (0x0101 - 0x0078)
class UTask_FKaijuProtect_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      BBKey__ShouldProtect;                                     // 0x0078(0x0028) (Edit, BlueprintVisible)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x00A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_Event_OwnerActor2;                                 // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AForestKaiju_AIController_BP_C*              K2Node_DynamicCast_AsForestKaiju_AIController_BP_C;       // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x00B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_GetControllerPawn_ReturnValue;                   // 0x00C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AForestKaiju_Character_BP_C*                 K2Node_DynamicCast_AsForestKaiju_Character_BP_C;          // 0x00C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x00D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AForestKaiju_AIController_BP_C*              K2Node_DynamicCast_AsForestKaiju_AIController_BP_C2;      // 0x00E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x00E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_GetControllerPawn_ReturnValue2;                  // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AForestKaiju_Character_BP_C*                 K2Node_DynamicCast_AsForestKaiju_Character_BP_C2;         // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0100(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_FKaijuProtect.Task_FKaijuProtect_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ReceiveAbort(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_FKaijuProtect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
