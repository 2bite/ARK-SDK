#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BeeHive_PlayerOwned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BeeHive_PlayerOwned.BeeHive_PlayerOwned_C
// 0x00A2 (0x0F90 - 0x0EEE)
class ABeeHive_PlayerOwned_C : public ABeeHive_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0EEE(0x0002) MISSED OFFSET
	class UPrimalInventoryBP_BeeHive_C*                PrimalInventoryBP_BeeHive_C1;                             // 0x0EF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ReferenceMesh;                                            // 0x0EF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FARKDinoData                                BeeData;                                                  // 0x0F00(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	class AShooterPlayerController*                    ControllerThatRequestedDestruction;                       // 0x0F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x0F48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0F49(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0F4A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0F4B(0x0005) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0F50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0F58(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x0F64(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x0F70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x0F74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x0F78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x0F7C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        CallFunc_SpawnFromDinoData_ReturnValue;                   // 0x0F88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BeeHive_PlayerOwned.BeeHive_PlayerOwned_C");
		return ptr;
	}


	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void BPGetInfoFromConsumedItemForPlacedStructure(class UPrimalItem** ItemToConsumed);
	void BPUpdateItemVisuals();
	void BPUnstasis();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BeeHive_PlayerOwned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
