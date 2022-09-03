#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_FKaijuChestNodeDestroyed_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_FKaijuChestNodeDestroyed.Task_FKaijuChestNodeDestroyed_C
// 0x0050 (0x00C8 - 0x0078)
class UTask_FKaijuChestNodeDestroyed_C : public UBTTask_BlueprintBase
{
public:
	class AForestKaiju_Character_BP_C*                 ForestKaijuChar;                                          // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue;                   // 0x0080(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x0088(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x008C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x0090(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AForestKaiju_AIController_BP_C*              K2Node_DynamicCast_AsForestKaiju_AIController_BP_C;       // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x00A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_GetControllerPawn_ReturnValue;                   // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x00B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	class AForestKaiju_Character_BP_C*                 K2Node_DynamicCast_AsForestKaiju_Character_BP_C;          // 0x00B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x00C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x00C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_FKaijuChestNodeDestroyed.Task_FKaijuChestNodeDestroyed_C");
		return ptr;
	}


	void STATIC_Wipe_Out_All_Poison_Trees_And_Wyverns();
	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_FKaijuChestNodeDestroyed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
