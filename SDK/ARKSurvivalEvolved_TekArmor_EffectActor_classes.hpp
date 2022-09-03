#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekArmor_EffectActor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekArmor_EffectActor.TekArmor_EffectActor_C
// 0x00C8 (0x0530 - 0x0468)
class ATekArmor_EffectActor_C : public AActor
{
public:
	class UAudioComponent*                             TekSound;                                                 // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TekParticle;                                              // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            Ref_Player;                                               // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ATekArmor_EffectActor_C*                     SelfAsObj;                                                // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TekParticleRef;                                           // 0x0490(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  TekSoundRef;                                              // 0x0498(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSoundOn;                                                 // 0x04A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bParticlesOn;                                             // 0x04A1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x04A2(0x0002) MISSED OFFSET
	struct FVector                                     ParticleScale;                                            // 0x04A4(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetComponentScale_ReturnValue;                // 0x04B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	class UParticleSystem*                             K2Node_CustomEvent_particle2;                             // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_particleScale2;                        // 0x04C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	class USoundBase*                                  K2Node_CustomEvent_sound2;                                // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_CustomEvent_player;                                // 0x04E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x04E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x04E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_VectorVector_ReturnValue;               // 0x04EA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x04EB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_DiedCharacter;                         // 0x04F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystem*                             K2Node_CustomEvent_particle;                              // 0x04F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_particleScale;                         // 0x0500(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	class USoundBase*                                  K2Node_CustomEvent_Sound;                                 // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x0518(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_VectorVector_ReturnValue2;              // 0x0519(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x051A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_active2;                               // 0x051B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_active;                                // 0x051C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x051D(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0520(0x0014) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekArmor_EffectActor.TekArmor_EffectActor_C");
		return ptr;
	}


	void OnRep_ParticleScale();
	void OnRep_bParticlesOn();
	void OnRep_bSoundOn();
	void OnRep_TekSoundRef();
	void OnRep_TekParticleTemplate();
	void SetSoundActive(bool Active, float StartTime);
	void Set_ParticleActive(bool Active);
	void UserConstructionScript();
	void InitTekEffect(class UParticleSystem* particle, const struct FVector& ParticleScale, class USoundBase* Sound, class APrimalCharacter* Player);
	void PlayerDied(class APrimalCharacter* DiedCharacter);
	void SetTekFX(class UParticleSystem* particle, const struct FVector& ParticleScale, class USoundBase* Sound);
	void Replicate_SetSoundState(bool Active);
	void Replicate_SetParticleState(bool Active);
	void ExecuteUbergraph_TekArmor_EffectActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
