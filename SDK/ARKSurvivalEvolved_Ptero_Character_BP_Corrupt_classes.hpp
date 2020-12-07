#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ptero_Character_BP_Corrupt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ptero_Character_BP_Corrupt.Ptero_Character_BP_Corrupt_C
// 0x0063 (0x21F3 - 0x2190)
class APtero_Character_BP_Corrupt_C : public APtero_Character_BP_C
{
public:
	class UAudioComponent*                             CorruptedSFX;                                             // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BodyDMIC;                                                 // 0x2198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CorruptDMIC;                                              // 0x21A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CorruptSpawnValue;                                        // 0x21A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               DontDoMaterialSpawning;                                   // 0x21AC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               Teleporting;                                              // 0x21AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x21AE(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x21B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x21B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x21B5(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x21B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x21BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x21BD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x21BE(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_Event_Loc;                                         // 0x21C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x21CC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue;       // 0x21D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x21D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue2;      // 0x21E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x21E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_Constant_ReturnValue;                  // 0x21EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x21F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x21F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue2;              // 0x21F2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ptero_Character_BP_Corrupt.Ptero_Character_BP_Corrupt_C");
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
	void ExecuteUbergraph_Ptero_Character_BP_Corrupt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
