#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Door_Tek_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Door_Tek_Base.Door_Tek_Base_C
// 0x01ED (0x0D35 - 0x0B48)
class ADoor_Tek_Base_C : public ADoor_Base_SM_C
{
public:
	float                                              DoorInterpDestValue;                                      // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DoorInterpCurrentValue;                                   // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DoorMatInterpSpeed;                                       // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DoorAutoCloseRadius;                                      // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AutoOpenSetting;                                          // 0x0B58(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                StayOpenSetting;                                          // 0x0B5C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                AutoCloseTimeSetting;                                     // 0x0B60(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B64(0x0004) MISSED OFFSET
	TArray<float>                                      AutoCloseTimeValues;                                      // 0x0B68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      AllowParentDoorframeClass;                                // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0B80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x0B84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0B88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x0B8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x0B90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0B91(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0B92(0x0002) MISSED OFFSET
	float                                              K2Node_CustomEvent_InterpDest;                            // 0x0B94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x0B98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x0B9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x0BA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0BA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0BA5(0x0003) MISSED OFFSET
	float                                              CallFunc_FInterpTo_Constant_ReturnValue;                  // 0x0BA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0BAC(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0BB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetDoorState_ReturnValue;                        // 0x0BB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x0BBC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x0BBD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0BBE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0BBF(0x0001) MISSED OFFSET
	int                                                CallFunc_GetDoorState_ReturnValue2;                       // 0x0BC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetDoorState_ReturnValue3;                       // 0x0BC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x0BC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue2;                    // 0x0BC9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x0BCA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0BCB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Array_Get_Item;                                  // 0x0BCC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x0BD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0BD1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0BD2(0x0002) MISSED OFFSET
	float                                              CallFunc_Array_Get_Item2;                                 // 0x0BD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x0BD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0BD9(0x0003) MISSED OFFSET
	float                                              CallFunc_Array_Get_Item3;                                 // 0x0BDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_OtherActor;                            // 0x0BE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_CustomEvent_OtherComp;                             // 0x0BE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_OtherBodyIndex;                        // 0x0BF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bFromSweep;                            // 0x0BF4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0BF5(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_CustomEvent_SweepResult;                           // 0x0BF8(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x0C80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0C81(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0C88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0C90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x0C91(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValidDoorOpener_IsValid;                       // 0x0C92(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x5];                                       // 0x0C93(0x0005) MISSED OFFSET
	TArray<class UActorComponent*>                     CallFunc_GetComponentsByClass_ReturnValue;                // 0x0C98(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0CA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0CAC(0x0004) MISSED OFFSET
	class UActorComponent*                             CallFunc_Array_Get_Item4;                                 // 0x0CB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0CB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0CB9(0x0007) MISSED OFFSET
	class UPrimitiveComponent*                         K2Node_DynamicCast_AsPrimitiveComponent;                  // 0x0CC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0CC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0CC9(0x0007) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue;                         // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic;             // 0x0CD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0CE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0CE1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0CE4(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0CF4(0x0004) MISSED OFFSET
	TArray<class UActorComponent*>                     CallFunc_GetComponentsByClass_ReturnValue2;               // 0x0CF8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x0D08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0D0C(0x0004) MISSED OFFSET
	class UActorComponent*                             CallFunc_Array_Get_Item5;                                 // 0x0D10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x0D18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0D19(0x0007) MISSED OFFSET
	class USphereComponent*                            K2Node_DynamicCast_AsSphereComponent;                     // 0x0D20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0D28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x0D29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x0D2A(0x0002) MISSED OFFSET
	struct FName                                       CallFunc_GetObjectName_ReturnValue;                       // 0x0D2C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_NameName_ReturnValue;                   // 0x0D34(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Door_Tek_Base.Door_Tek_Base_C");
		return ptr;
	}


	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool IsValidSnapPointFrom(class APrimalStructure** ParentStructure, int* MySnapPointFromIndex);
	void IsValidDoorOpener(class APrimalCharacter* DoorOpener, bool* IsValid);
	void DoAutoCloseCheck();
	void BPPostSetStructureCollisionChannels();
	void BPGotoDoorState(int* NewDoorState);
	void UserConstructionScript();
	void StartDoorInterp(float InterpDest);
	void UpdateDoorInterp();
	void CheckForDoorOpeners();
	void OnComponentBeginOverlap_Event(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Door_Tek_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
