#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tent_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tent_BP.Tent_BP_C
// 0x0061 (0x0BE9 - 0x0B88)
class ATent_BP_C : public APrimalStructureSkeletalDoor
{
public:
	class UBoxComponent*                               DoorCollision;                                            // 0x0B88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Trigger;                                                  // 0x0B90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalDoor;                                             // 0x0B98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        TentMesh;                                                 // 0x0BA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0BA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecayRate;                                                // 0x0BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmountOfDecay;                                            // 0x0BB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FirstLoop;                                                // 0x0BB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0BB9(0x0003) MISSED OFFSET
	float                                              FloorMaxDeltaZ;                                           // 0x0BBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              StructureClassesForFullPickUp;                            // 0x0BC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPrimalItem*                                 K2Node_Event_pickedup;                                    // 0x0BD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetMaxHealth_ReturnValue;                        // 0x0BD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x0BDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0BE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0BE1(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0BE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0BE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tent_BP.Tent_BP_C");
		return ptr;
	}


	void UseFullPickup(class APrimalStructure* StructToPickUp, bool* UseFull);
	bool BPAllowPickupGiveItem(class APlayerController** ForPC);
	bool BPPreventUsingAsFloorForStructure(class APrimalStructure** StructureToPlaceOnMe, struct FPlacementData* theOutPlacementData);
	void GiveChildStructuresToInventory(class UPrimalInventoryComponent* ToInv);
	void GiveFloorStructures();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PeriodicDamage();
	void BPApplyCustomDurabilityOnPickup(class UPrimalItem** PickedUp);
	void ExecuteUbergraph_Tent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
