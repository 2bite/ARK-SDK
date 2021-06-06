#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Sunlight_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Sunlight.Buff_Sunlight_C
// 0x00C0 (0x0A20 - 0x0960)
class ABuff_Sunlight_C : public ABuff_Base_C
{
public:
	float                                              LocalParticleFadeout_Value_8B257A684194C3E57DAC47A6569C0378;// 0x0960(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LocalParticleFadeout__Direction_8B257A684194C3E57DAC47A6569C0378;// 0x0964(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0965(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LocalParticleFadeout;                                     // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamagePerSecond;                                      // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentageOfMaxHealthPerSecond;                           // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              DamageMitigationArmorTypes;                               // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DamageReductionPercentPerArmorItem;                       // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DurabilityDamagePerSecond;                                // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EPrimalEquipmentType>>          EquipSlotsToDamageDurability;                             // 0x0990(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DamageEquippedWeaponDurability;                           // 0x09A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x09A1(0x0007) MISSED OFFSET
	TArray<class UClass*>                              buffsToRemove;                                            // 0x09A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UParticleSystem*                             LocalOnlyParticleSystem;                                  // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LocalParticles;                                           // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LocalParticleFadeoutParamName;                            // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x09D0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_AddComponent_ReturnValue;                        // 0x0A00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0A08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x0A09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0A0A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0A0B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0A0C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0A0D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0A0E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0A0F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0A10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0A11(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_Event_ForInstigator;                               // 0x0A18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Sunlight.Buff_Sunlight_C");
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
	void ExecuteUbergraph_Buff_Sunlight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
