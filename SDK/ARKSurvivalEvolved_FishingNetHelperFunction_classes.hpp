#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FishingNetHelperFunction_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FishingNetHelperFunction.FishingNetHelperFunction_C
// 0x0000 (0x0028 - 0x0028)
class UFishingNetHelperFunction_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FishingNetHelperFunction.FishingNetHelperFunction_C");
		return ptr;
	}


	void Stop_Reeling(class UObject* Fisher);
	void Cancel_Cast(class UObject* Projectile_Owner);
	void Caught_Fish(class UObject* Projectile_Owner, class APrimalDinoCharacter* Fish);
	void Pass_Projectile_Reference(class UObject* Projectile_Owner, class AShooterProjectile* Projectile);
	void reel(class UObject* Fisher);
	void Update_Rope(class AShooterProjectile* Net_Projectile, const struct FVector& Rope_Endpoint_Location);
	void Notify_Net_Collided_With_Water(class UObject* Projectile_Owner, const struct FVector& Water_Collide_Location, const struct FRotator& Projectile_Rotation);
	void ExecuteUbergraph_FishingNetHelperFunction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
