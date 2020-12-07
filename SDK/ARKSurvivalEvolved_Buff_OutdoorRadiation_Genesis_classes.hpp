#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OutdoorRadiation_Genesis_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C
// 0x00C0 (0x0A10 - 0x0950)
class ABuff_OutdoorRadiation_Genesis_C : public ABuff_Base_C
{
public:
	float                                              LocalParticleFadeout_Value_D50E2ABF4A5043FC801DEE9ABD567034;// 0x0950(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LocalParticleFadeout__Direction_D50E2ABF4A5043FC801DEE9ABD567034;// 0x0954(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0955(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LocalParticleFadeout;                                     // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamagePerSecond;                                      // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentageOfMaxHealthPerSecond;                           // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              DamageMitigationArmorTypes;                               // 0x0968(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DamageReductionPercentPerArmorItem;                       // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DurabilityDamagePerSecond;                                // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EPrimalEquipmentType>>          EquipSlotsToDamageDurability;                             // 0x0980(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DamageEquippedWeaponDurability;                           // 0x0990(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0991(0x0007) MISSED OFFSET
	TArray<class UClass*>                              buffsToRemove;                                            // 0x0998(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UParticleSystem*                             LocalOnlyParticleSystem;                                  // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LocalParticles;                                           // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LocalParticleFadeoutParamName;                            // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x09C0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_AddComponent_ReturnValue;                        // 0x09F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x09F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x09F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x09FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x09FB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x09FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x09FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x09FE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x09FF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0A00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0A01(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_Event_ForInstigator;                               // 0x0A08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C");
		return ptr;
	}


	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	float Get_Max_Health();
	void GetDamageMitigationArmorEquippedCount(int* NumItemsEquipped);
	void DamageDurability(class UPrimalItem* Item, float Damage);
	void RemoveBuffs();
	void BPActivated(class AActor** ForInstigator);
	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void LocalParticleFadeout__FinishedFunc();
	void LocalParticleFadeout__UpdateFunc();
	void ReceiveBeginPlay();
	void BPDeactivated(class AActor** ForInstigator);
	void ExecuteUbergraph_Buff_OutdoorRadiation_Genesis(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
