#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x00B9 (0x22A0 - 0x21E7)
class AGriffin_Character_BP_C : public ADino_Character_BP_DivingFlyer_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x21E7(0x0001) MISSED OFFSET
	class UParticleSystemComponent*                    RightWingParticles;                                       // 0x21E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LeftWingParticles;                                        // 0x21F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             DivingAudio;                                              // 0x21F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    DivingParticles;                                          // 0x2200(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Griffin_C*  DinoCharacterStatus_BP_Griffin_C1;                        // 0x2208(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DivingWingFlapGroundDistance;                             // 0x2210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2214(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    FeatherMaterial;                                          // 0x2218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FeatherWindSpeedMin;                                      // 0x2220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeatherWindSpeedMax;                                      // 0x2224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeatherWindIntensityMin;                                  // 0x2228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeatherWindIntensityMax;                                  // 0x222C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsLocallyCarried_1;                                       // 0x2230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2231(0x0003) MISSED OFFSET
	float                                              WingFlapFX_Scale;                                         // 0x2234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMeshInterpolating_1;                                     // 0x2238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2239(0x0003) MISSED OFFSET
	float                                              SplashFXTimeDilation;                                     // 0x223C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DropCarriedCharacterMontage;                              // 0x2240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropCarriedCharAfterAnimPercent;                          // 0x2248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x224C(0x0004) MISSED OFFSET
	class UParticleSystem*                             Ref_WingFlapParticle_Water;                               // 0x2250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Ref_WingFlapParticle_Ground;                              // 0x2258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          CallFunc_Array_Get_Item;                                  // 0x2260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Delay;                                 // 0x2268(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x226C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic;             // 0x2270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2278(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x2279(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingleForObjects_ActorsToIgnore_RefProperty;// 0x2280(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingleForObjects_ActorsToIgnore2_RefProperty;// 0x2290(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Griffin_Character_BP.Griffin_Character_BP_C");
		return ptr;
	}


	void UpdateDivingFX();
	void OnDiveSwipe();
	void Update_WindMaterial();
	void Update_Trail_Particle_System(class UParticleSystemComponent* ParticleSystem, bool Active);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void UpdateDivingParticleSystem(class UParticleSystemComponent* ParticleSystem, bool Active);
	void Update_Diving_Audio(bool Active, bool LocallyCarried);
	void Update_Diving_Effects();
	void STATIC_CheckGroundForWingFlap();
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
