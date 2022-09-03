#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Projectile_SummonerTumor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_SummonerTumor.Projectile_SummonerTumor_C
// 0x0014 (0x0674 - 0x0660)
class AProjectile_SummonerTumor_C : public AShooterProjectile
{
public:
	class UChildActorComponent*                        TrailEmitter;                                             // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShotDown;                                                // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0669(0x0003) MISSED OFFSET
	float                                              Health;                                                   // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x0670(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_SummonerTumor.Projectile_SummonerTumor_C");
		return ptr;
	}


	void ResetDamageable();
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnExplode(struct FHitResult* Result);
	void UserConstructionScript();
	void Multi_SetLifeSpan();
	void ExecuteUbergraph_Projectile_SummonerTumor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
