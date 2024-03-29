#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Moth_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Moth_Character_BP.Moth_Character_BP_C
// 0x00A1 (0x2329 - 0x2288)
class AMoth_Character_BP_C : public AMoth_Character_BP_Base_C
{
public:
	class UDinoCharacterStatusComponent_BP_Moth_C*     DinoCharacterStatus_BP_Moth_C1;                           // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeBetweenSpores;                                        // 0x2290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfSpores;                                           // 0x2294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SporeCounter;                                             // 0x2298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x229C(0x0004) MISSED OFFSET
	double                                             LastWildSporeTime;                                        // 0x22A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WildSporeInterval;                                        // 0x22A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x22AC(0x0004) MISSED OFFSET
	class UClass*                                      SporeClass;                                               // 0x22B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue;                   // 0x22B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x22C4(0x000C) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x22D0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2300(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x2301(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x2308(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_FinishSpawningActor_ReturnValue;                 // 0x2310(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x2318(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x231C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x231D(0x0003) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2320(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x2328(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Moth_Character_BP.Moth_Character_BP_C");
		return ptr;
	}


	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void UserConstructionScript();
	void SpawnSpores();
	void SporeAttack();
	void ExecuteUbergraph_Moth_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
