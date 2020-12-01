#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x00C0 (0x09F0 - 0x0930)
class ABuff_OutdoorRadiation_Genesis_C : public ABuff_Base_C
{
public:
	float                                              LocalParticleFadeout_Value_D50E2ABF4A5043FC801DEE9ABD567034;// 0x0930(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LocalParticleFadeout__Direction_D50E2ABF4A5043FC801DEE9ABD567034;// 0x0934(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0935(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LocalParticleFadeout;                                     // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamagePerSecond;                                      // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentageOfMaxHealthPerSecond;                           // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              DamageMitigationArmorTypes;                               // 0x0948(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DamageReductionPercentPerArmorItem;                       // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DurabilityDamagePerSecond;                                // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EPrimalEquipmentType>>          EquipSlotsToDamageDurability;                             // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DamageEquippedWeaponDurability;                           // 0x0970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0971(0x0007) MISSED OFFSET
	TArray<class UClass*>                              buffsToRemove;                                            // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UParticleSystem*                             LocalOnlyParticleSystem;                                  // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LocalParticles;                                           // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LocalParticleFadeoutParamName;                            // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x09A0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_AddComponent_ReturnValue;                        // 0x09D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x09D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x09D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x09DA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x09DB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x09DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x09DD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x09DE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x09DF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x09E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x09E1(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_Event_ForInstigator;                               // 0x09E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

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
