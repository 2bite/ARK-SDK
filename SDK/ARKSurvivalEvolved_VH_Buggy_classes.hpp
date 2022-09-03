#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_VH_Buggy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VH_Buggy.VH_Buggy_C
// 0x007C (0x23CC - 0x2350)
class AVH_Buggy_C : public APrimalWheeledVehicleCharacter
{
public:
	class UDinoCharacterStatusComponent_BP_C*          DinoCharacterStatus_BP_C1;                                // 0x2350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             TireRolling;                                              // 0x2358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x2360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HandBrakePressed;                                         // 0x2368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x2369(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DMI;                                                      // 0x2370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoundTireSpinSpeed;                                       // 0x2378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoundTireSpinMin;                                         // 0x237C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoundTireSpinMax;                                         // 0x2380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              K2Node_InputAxisEvent_AxisValue2;                         // 0x2384(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2388(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2389(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x238C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 K2Node_Event_NewController;                               // 0x2398(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x23A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x23A1(0x0003) MISSED OFFSET
	float                                              CallFunc_GetForwardSpeed_ReturnValue;                     // 0x23A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x23A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x23A9(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaSeconds;                                // 0x23AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x23B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x23B1(0x0003) MISSED OFFSET
	float                                              K2Node_InputAxisEvent_AxisValue;                          // 0x23B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x23B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x23B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x23BA(0x0002) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x23BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x23C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x23C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x23C5(0x0003) MISSED OFFSET
	float                                              CallFunc_NormalizeToRange_ReturnValue;                    // 0x23C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VH_Buggy.VH_Buggy_C");
		return ptr;
	}


	void BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	void UserConstructionScript();
	void InpActEvt_Jump_K2Node_InputActionEvent_75();
	void InpActEvt_Jump_K2Node_InputActionEvent_74();
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_32();
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_31();
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_30();
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_29();
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_28();
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_135(float AxisValue);
	void ReceivePossessed(class AController** NewController);
	void ReceiveTick(float* DeltaSeconds);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_46(float AxisValue);
	void ExecuteUbergraph_VH_Buggy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
