#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Eel_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Eel_Character_BP.Eel_Character_BP_C
// 0x030C (0x2494 - 0x2188)
class AEel_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    ShockAOE;                                                 // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    CanLightningAttackEffect;                                 // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ChainBeam2;                                               // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ChainBeam1;                                               // 0x21A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Eel_C*      DinoCharacterStatus_BP_Eel_C1;                            // 0x21A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Chain_Targets;                                            // 0x21B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              ChainLifetime;                                            // 0x21C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseShockWeight;                                          // 0x21C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShockWeightPerGangBonus;                                  // 0x21C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanLightningAttack;                                       // 0x21CC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x21CD(0x0003) MISSED OFFSET
	float                                              minEmissive;                                              // 0x21D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxEmissive;                                              // 0x21D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x21D8(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_CustomEvent_DelayTime;                             // 0x21E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x21EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x21ED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x21EE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x21EF(0x0001) MISSED OFFSET
	struct FDinoAttackInfo                             CallFunc_Array_Get_Item;                                  // 0x21F0(0x0130) (Transient, DuplicateTransient)
	struct FDinoAttackInfo                             CallFunc_Array_Get_Item2;                                 // 0x2320(0x0130) (Transient, DuplicateTransient)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x2450(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2454(0x0004) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue;                         // 0x2458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_CustomEvent_DiedCharacter;                         // 0x2460(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic;             // 0x2468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2470(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2471(0x0003) MISSED OFFSET
	struct FLinearColor                                CallFunc_K2_GetVectorParameterValue_ReturnValue;          // 0x2474(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor;                            // 0x2484(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Eel_Character_BP.Eel_Character_BP_C");
		return ptr;
	}


	void BPUnstasis();
	void BPSetupTamed(bool* bWasJustTamed);
	void UpdateEmissive();
	void OnRep_CanLightningAttack();
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void CheckNearbyAndUpdateBeams();
	void UpdateChainBeamEnds(TArray<class AActor*>* NearbyTeamEels);
	void BPTimerNonDedicated();
	void BPDoAttack(int* AttackIndex);
	void UserConstructionScript();
	void ClearParticles(float DelayTime);
	void StartParticles();
	void SetCanLightningAttackAfterDelay();
	void AnimNotify_ShockAOEParticle();
	void ReceiveBeginPlay();
	void UnsetFX(class APrimalCharacter* DiedCharacter);
	void ExecuteUbergraph_Eel_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
