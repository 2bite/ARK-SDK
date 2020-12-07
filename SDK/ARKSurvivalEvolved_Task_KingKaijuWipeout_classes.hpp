#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_KingKaijuWipeout_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_KingKaijuWipeout.Task_KingKaijuWipeout_C
// 0x0198 (0x0210 - 0x0078)
class UTask_KingKaijuWipeout_C : public UBTTask_BlueprintBase
{
public:
	class AKingKaiju_Character_BP_C*                   KKC;                                                      // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartTick;                                                // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      ShouldPlayWipeout;                                        // 0x0088(0x0028) (Edit, BlueprintVisible)
	class ADayCycleManager*                            DayCycleManager;                                          // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	double                                             WipeoutStartTime;                                         // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AKingKaiju_AIController_BP_C*                KKAIC;                                                    // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ESLightningSpawnDelayMin;                                 // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	double                                             LastTimeLightningSpawn;                                   // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ESLightningSpawnDelayMax;                                 // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_Event_OwnerActor3;                                 // 0x00E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKingKaiju_AIController_BP_C*                K2Node_DynamicCast_AsKingKaiju_AIController_BP_C;         // 0x00E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x00F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_GetControllerPawn_ReturnValue;                   // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKingKaiju_Character_BP_C*                   K2Node_DynamicCast_AsKingKaiju_Character_BP_C;            // 0x0100(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0108(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_Event_OwnerActor2;                                 // 0x0110(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x0118(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetMaxHealth_ReturnValue;                        // 0x011C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetHealth_ReturnValue;                           // 0x0120(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x0124(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x0128(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x012C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x012D(0x0003) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0130(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADayCycleManager*                            CallFunc_GetDayCycleManager_ReturnValue;                  // 0x0138(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TScriptInterface<class UExtinctionDayCycle_Interface_C> K2Node_DynamicCast_AsExtinctionDayCycle_Interface_C;      // 0x0140(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0150(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoesImplementInterface_ReturnValue;              // 0x0151(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0152(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x0154(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x0158(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue;                   // 0x0160(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TScriptInterface<class UExtinctionDayCycle_Interface_C> K2Node_DynamicCast_AsExtinctionDayCycle_Interface_C2;     // 0x0168(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0178(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0180(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetHealth_ReturnValue2;                          // 0x0188(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetMaxHealth_ReturnValue2;                       // 0x018C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x0190(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x0198(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x01A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue3;                         // 0x01A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue2;                  // 0x01A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x01B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x01C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x01C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x01C5(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x01C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x01D4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x01E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_RandomPointInBoundingBox_ReturnValue;            // 0x01EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsStandalone_ReturnValue;                        // 0x01F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x01F9(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x01FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue2;                        // 0x0200(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0201(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x0208(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_KingKaijuWipeout.Task_KingKaijuWipeout_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveAbort(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_KingKaijuWipeout(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
