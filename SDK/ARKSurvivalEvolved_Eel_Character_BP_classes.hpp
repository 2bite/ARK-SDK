#pragma once

// ARKSurvivalEvolved (329.9) SDK

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
// 0x030C (0x2574 - 0x2268)
class AEel_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    ShockAOE;                                                 // 0x2268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    CanLightningAttackEffect;                                 // 0x2270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ChainBeam2;                                               // 0x2278(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ChainBeam1;                                               // 0x2280(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Eel_C*      DinoCharacterStatus_BP_Eel_C1;                            // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Chain_Targets;                                            // 0x2290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              ChainLifetime;                                            // 0x22A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseShockWeight;                                          // 0x22A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShockWeightPerGangBonus;                                  // 0x22A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanLightningAttack;                                       // 0x22AC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x22AD(0x0003) MISSED OFFSET
	float                                              minEmissive;                                              // 0x22B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxEmissive;                                              // 0x22B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x22B8(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_CustomEvent_DelayTime;                             // 0x22C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x22CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x22CD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x22CE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x22CF(0x0001) MISSED OFFSET
	struct FDinoAttackInfo                             CallFunc_Array_Get_Item;                                  // 0x22D0(0x0130) (Transient, DuplicateTransient)
	struct FDinoAttackInfo                             CallFunc_Array_Get_Item2;                                 // 0x2400(0x0130) (Transient, DuplicateTransient)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x2530(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2534(0x0004) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue;                         // 0x2538(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_CustomEvent_DiedCharacter;                         // 0x2540(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic;             // 0x2548(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2550(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2551(0x0003) MISSED OFFSET
	struct FLinearColor                                CallFunc_K2_GetVectorParameterValue_ReturnValue;          // 0x2554(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor;                            // 0x2564(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

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
