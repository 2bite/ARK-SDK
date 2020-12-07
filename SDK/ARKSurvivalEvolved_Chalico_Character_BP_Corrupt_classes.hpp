#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Chalico_Character_BP_Corrupt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Chalico_Character_BP_Corrupt.Chalico_Character_BP_Corrupt_C
// 0x006D (0x23D6 - 0x2369)
class AChalico_Character_BP_Corrupt_C : public AChalico_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2369(0x0007) MISSED OFFSET
	class UAudioComponent*                             CorruptedSFX;                                             // 0x2370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BodyDynamicMIC;                                           // 0x2378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CorruptDynamicMIC;                                        // 0x2380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CorruptSpawnInValue;                                      // 0x2388(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               DontDoMaterialSpawning;                                   // 0x238C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               Teleporting;                                              // 0x238D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x238E(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x2390(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2394(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2395(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x2398(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x239C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x239D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x239E(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_Event_Loc;                                         // 0x23A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x23AC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue;       // 0x23B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x23B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue2;      // 0x23C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x23C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x23CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x23CD(0x0003) MISSED OFFSET
	float                                              CallFunc_FInterpTo_Constant_ReturnValue;                  // 0x23D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x23D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue2;              // 0x23D5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Chalico_Character_BP_Corrupt.Chalico_Character_BP_Corrupt_C");
		return ptr;
	}


	void BP_OnSetDeath();
	void UserConstructionScript();
	void SetSpawnLoc(const struct FVector& Loc);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void BPTriggerStasisEvent();
	void Teleported();
	void TemporarilySetTeleporting();
	void TurnOffTeleporting();
	void ExecuteUbergraph_Chalico_Character_BP_Corrupt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
