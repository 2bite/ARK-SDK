#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekCloningChamber_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekCloningChamber.TekCloningChamber_C
// 0x0288 (0x1098 - 0x0E10)
class ATekCloningChamber_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_TekCloningChamber_C*      PrimalInventoryBP_TekCloningChamber_C1;                   // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CloningEmitter;                                           // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class APrimalDinoCharacter*>                LastLocalInRangeDinos;                                    // 0x0E28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	struct FARKDinoData                                CloningDinoData;                                          // 0x0E38(0x0040) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, SaveGame)
	struct FVector                                     CloneSpawnOffset;                                         // 0x0E78(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsCloning;                                               // 0x0E84(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E85(0x0003) MISSED OFFSET
	double                                             CloningCompletionTime;                                    // 0x0E88(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData)
	class FString                                      CloningDescriptiveName;                                   // 0x0E90(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame)
	float                                              CloningTimePerElementShard;                               // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ReplicatedShards;                                         // 0x0EA4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              CloneBaseElementCostGlobalMultiplier;                     // 0x0EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CloneElementCostPerLevelGlobalMultiplier;                 // 0x0EAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CloningSearchRange;                                       // 0x0EB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0EB4(0x0004) MISSED OFFSET
	class FString                                      K2Node_CustomEvent_TheCloningDescriptiveName;             // 0x0EB8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	double                                             K2Node_CustomEvent_TheCloningCompletionTime;              // 0x0EC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0ED0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0ED1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0ED2(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0ED8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0EE0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x0EEC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x0EF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x0EFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x0F00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x0F04(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GreaterGreater_VectorRotator_ReturnValue;        // 0x0F10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x0F1C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0F28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        CallFunc_SpawnFromDinoData_ReturnValue;                   // 0x0F30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x0F38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x0F40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0F44(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x0F48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_TimeSince_ReturnValue;                           // 0x0F50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0F54(0x000C) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_K2_GetComponentToWorld_ReturnValue;              // 0x0F60(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0F90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0F91(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x0F98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ATekClonedEmitter_C*                         CallFunc_FinishSpawningActor_ReturnValue;                 // 0x0FA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue2;        // 0x0FA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ATekCloneStartEmitter_C*                     CallFunc_FinishSpawningActor_ReturnValue2;                // 0x0FB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AEmitter*                                    K2Node_DynamicCast_AsEmitter;                             // 0x0FB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0FC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0FC1(0x0007) MISSED OFFSET
	class AEmitter*                                    K2Node_DynamicCast_AsEmitter2;                            // 0x0FC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0FD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0FD1(0x0007) MISSED OFFSET
	TArray<unsigned char>                              K2Node_MakeArray_Array;                                   // 0x0FD8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FARKDinoData                                K2Node_MakeStruct_ARKDinoData;                            // 0x0FE8(0x0040) (Transient, DuplicateTransient)
	class AEmitter*                                    K2Node_DynamicCast_AsEmitter3;                            // 0x1028(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x1030(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x1031(0x0007) MISSED OFFSET
	TArray<unsigned char>                              K2Node_MakeArray_Array2;                                  // 0x1038(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FARKDinoData                                K2Node_MakeStruct_ARKDinoData2;                           // 0x1048(0x0040) (Transient, DuplicateTransient)
	TArray<class AActor*>                              CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty;// 0x1088(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekCloningChamber.TekCloningChamber_C");
		return ptr;
	}


	void BPChangedActorTeam();
	void BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem);
	void BPContainerDeactivated();
	void IsValidToClone(class APrimalDinoCharacter* InDino, bool* bValid);
	bool BPOverrideAllowStructureAccess(class AShooterPlayerController** ForPC, bool* bIsAccessAllowed, bool* bForInventoryOnly);
	void STATIC_BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY);
	void ReceiveBeginPlay();
	void BPPostLoadedFromSaveGame();
	bool BPPreventStasis();
	void StartCloneDino(class APrimalDinoCharacter* DinoToClone);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void STATIC_BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void UserConstructionScript();
	void DoNetStartCloning(const class FString& TheCloningDescriptiveName, double TheCloningCompletionTime);
	void NetFinishCloning();
	void DoNetHaltCloning();
	void ExecuteUbergraph_TekCloningChamber(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
