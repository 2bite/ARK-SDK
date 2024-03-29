#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Character_BP_Male_InitialBuryOnly_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C
// 0x002A (0x2A3A - 0x2A10)
class AXenomorph_Character_BP_Male_InitialBuryOnly_C : public AXenomorph_Character_BP_Male_C
{
public:
	class UDinoCharacterStatusComponent_BP_Xenomorph_C* DinoCharacterStatus_BP_Xenomorph_C1;                      // 0x2A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaticBabyAge;                                            // 0x2A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaticBabyDamageReceiveMultiplier;                        // 0x2A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaticBabyAttackDestOffset;                               // 0x2A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnUnderground;                                         // 0x2A24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UnburyOnSpawnUnderground;                                 // 0x2A25(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UnburyTargetingIgnoredByWildDinos;                        // 0x2A26(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x2A27(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2A28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x2A29(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        CallFunc_GetDefaultXeno_Dino;                             // 0x2A30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x2A38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2A39(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C");
		return ptr;
	}


	float BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	void KillSelf();
	void BP_OnSetDeath();
	void InitializeDive();
	void SetupStaticBaby();
	void UpdateBuryMound(bool* ShouldShow);
	void GetDefaultXeno(class APrimalDinoCharacter** Dino);
	void BPUnstasis();
	void UpdateAttackDestOffset();
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void BPTimerServer();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BPDinoPostBeginPlay();
	void AttemptDiveOut();
	void ForceDiveEnd();
	void ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
