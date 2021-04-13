#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodElevatorTopSwitch_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodElevatorTopSwitch.WoodElevatorTopSwitch_C
// 0x0138 (0x0BF8 - 0x0AC0)
class AWoodElevatorTopSwitch_C : public AStructureBaseBP_C
{
public:
	class UAudioComponent*                             GearLoopingSoundComp;                                     // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMultiUseEntry                              ElevatorUpMultiUseEntry;                                  // 0x0AD8(0x0040) (Edit, BlueprintVisible)
	struct FMultiUseEntry                              ElevatorDownMultiUseEntry;                                // 0x0B18(0x0040) (Edit, BlueprintVisible)
	class UAnimMontage*                                ElevatorUpMontage;                                        // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ElevatorDownMontage;                                      // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ElevatorHoldMontage;                                      // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ElevatorDistanceIncrementUp;                              // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ElevatorDistanceIncrementDown;                            // 0x0B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalStructureElevatorState>         CurrentDirection;                                         // 0x0B78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B79(0x0007) MISSED OFFSET
	class USoundBase*                                  GearStartSound;                                           // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  GearStopSound;                                            // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  PlatformReachedTheTopSound;                               // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPublicUse;                                           // 0x0B98(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TEnumAsByte<EPrimalStructureElevatorState>         K2Node_CustomEvent_Direction;                             // 0x0B99(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0B9A(0x0006) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue;                     // 0x0BA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_SwitchedDirection;                     // 0x0BA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EPrimalStructureElevatorState>         K2Node_CustomEvent_NewDirection;                          // 0x0BA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0BAA(0x0006) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue;                                // 0x0BB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x0BB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0BB9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0BBA(0x0002) MISSED OFFSET
	float                                              CallFunc_Montage_Play_ReturnValue;                        // 0x0BBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0BC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0BC1(0x0007) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue2;                    // 0x0BC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue2;                       // 0x0BD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0BD4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x0BE0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x0BEC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodElevatorTopSwitch.WoodElevatorTopSwitch_C");
		return ptr;
	}


	void AllowedToChangePublicUse(class APlayerController* PC, bool* Allow);
	void STATIC_Make_Multi_Use_Entry(TEnumAsByte<EPrimalStructureElevatorState> Direction, int Priority, struct FMultiUseEntry* Entry);
	void Get_Elevator_Platform(class AWoodElevatorPlatform_Base_C** Elevator);
	void Move_Elevator(class APrimalStructureElevatorPlatform* Elevator, class APlayerController* PC, TEnumAsByte<EPrimalStructureElevatorState> Direction, bool* Success);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnElevatorStartMove(TEnumAsByte<EPrimalStructureElevatorState> Direction);
	void OnElevatorStop(bool SwitchedDirection, TEnumAsByte<EPrimalStructureElevatorState> NewDirection);
	void ExecuteUbergraph_WoodElevatorTopSwitch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
