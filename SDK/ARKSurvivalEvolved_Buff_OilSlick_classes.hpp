#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OilSlick_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_OilSlick.Buff_OilSlick_C
// 0x0082 (0x09D2 - 0x0950)
class ABuff_OilSlick_C : public ABuff_Base_C
{
public:
	class UBoxComponent*                               Collision;                                                // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FireBuffOffset;                                           // 0x0960(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x096C(0x0004) MISSED OFFSET
	class APrimalStructure*                            collidingStructure;                                       // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasCollidingStructure;                                   // 0x0978(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0979(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x097C(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_CustomEvent_Damage;                                // 0x098C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UDamageType*                                 K2Node_CustomEvent_DamageType;                            // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 K2Node_CustomEvent_InstigatedBy;                          // 0x0998(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_DamageCauser;                          // 0x09A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C* K2Node_DynamicCast_AsDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C;// 0x09A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x09B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x09B1(0x0007) MISSED OFFSET
	class UDmgType_Projectile_Fire_C*                  K2Node_DynamicCast_AsDmgType_Projectile_Fire_C;           // 0x09B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x09C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x09C1(0x0007) MISSED OFFSET
	class UShooterDamageTypeBP_Fire_C*                 K2Node_DynamicCast_AsShooterDamageTypeBP_Fire_C;          // 0x09C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x09D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x09D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_OilSlick.Buff_OilSlick_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void SpawnOilFire(const struct FVector& OverrideOriginLocation);
	void UserConstructionScript();
	void OnTakeAnyDamage_Event(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Buff_OilSlick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
