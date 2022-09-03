#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x00C8 (0x0A40 - 0x0978)
class ABuff_Sunlight_C : public ABuff_Base_C
{
public:
	float                                              LocalParticleFadeout_Value_8B257A684194C3E57DAC47A6569C0378;// 0x0978(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LocalParticleFadeout__Direction_8B257A684194C3E57DAC47A6569C0378;// 0x097C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x097D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LocalParticleFadeout;                                     // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamagePerSecond;                                      // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentageOfMaxHealthPerSecond;                           // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              DamageMitigationArmorTypes;                               // 0x0990(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DamageReductionPercentPerArmorItem;                       // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DurabilityDamagePerSecond;                                // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EPrimalEquipmentType>>          EquipSlotsToDamageDurability;                             // 0x09A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DamageEquippedWeaponDurability;                           // 0x09B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x09B9(0x0007) MISSED OFFSET
	TArray<class UClass*>                              BuffsToRemove;                                            // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UParticleSystem*                             LocalOnlyParticleSystem;                                  // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LocalParticles;                                           // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LocalParticleFadeoutParamName;                            // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x09E8(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x09F0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_AddComponent_ReturnValue;                        // 0x0A20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0A28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x0A29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0A2A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0A2B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0A2C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0A2D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0A2E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0A2F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0A30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0A31(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_Event_ForInstigator;                               // 0x0A38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

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
