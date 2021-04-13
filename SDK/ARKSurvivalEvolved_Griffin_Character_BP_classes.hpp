#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Griffin_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Griffin_Character_BP.Griffin_Character_BP_C
// 0x00B9 (0x23B0 - 0x22F7)
class AGriffin_Character_BP_C : public ADino_Character_BP_DivingFlyer_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x22F7(0x0001) MISSED OFFSET
	class UParticleSystemComponent*                    RightWingParticles;                                       // 0x22F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LeftWingParticles;                                        // 0x2300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             DivingAudio;                                              // 0x2308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    DivingParticles;                                          // 0x2310(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Griffin_C*  DinoCharacterStatus_BP_Griffin_C1;                        // 0x2318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DivingWingFlapGroundDistance;                             // 0x2320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2324(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    FeatherMaterial;                                          // 0x2328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FeatherWindSpeedMin;                                      // 0x2330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeatherWindSpeedMax;                                      // 0x2334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeatherWindIntensityMin;                                  // 0x2338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeatherWindIntensityMax;                                  // 0x233C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsLocallyCarried_1;                                       // 0x2340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2341(0x0003) MISSED OFFSET
	float                                              WingFlapFX_Scale;                                         // 0x2344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMeshInterpolating_1;                                     // 0x2348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2349(0x0003) MISSED OFFSET
	float                                              SplashFXTimeDilation;                                     // 0x234C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DropCarriedCharacterMontage;                              // 0x2350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropCarriedCharAfterAnimPercent;                          // 0x2358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x235C(0x0004) MISSED OFFSET
	class UParticleSystem*                             Ref_WingFlapParticle_Water;                               // 0x2360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Ref_WingFlapParticle_Ground;                              // 0x2368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          CallFunc_Array_Get_Item;                                  // 0x2370(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Delay;                                 // 0x2378(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x237C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic;             // 0x2380(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2388(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x2389(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingleForObjects_ActorsToIgnore_RefProperty;// 0x2390(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingleForObjects_ActorsToIgnore2_RefProperty;// 0x23A0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Griffin_Character_BP.Griffin_Character_BP_C");
		return ptr;
	}


	void UpdateDivingFX();
	void STATIC_OnDiveSwipe();
	void Update_WindMaterial();
	void Update_Trail_Particle_System(class UParticleSystemComponent* ParticleSystem, bool Active);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void UpdateDivingParticleSystem(class UParticleSystemComponent* ParticleSystem, bool Active);
	void Update_Diving_Audio(bool Active, bool LocallyCarried);
	void Update_Diving_Effects();
	void CheckGroundForWingFlap();
	void UserConstructionScript();
	void AnimNotify_WingFlap();
	void ReceiveBeginPlay();
	void AnimNotify_DiveSwipe();
	void DropCarriedCharacter_AfterDelay(float Delay);
	void ExecuteUbergraph_Griffin_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
