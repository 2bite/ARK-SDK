#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Projectile_Summoner_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_Summoner.Projectile_Summoner_C
// 0x0008 (0x0690 - 0x0688)
class AProjectile_Summoner_C : public APrimalProjectileArrow
{
public:
	class UAudioComponent*                             Projectile_SFX;                                           // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Summoner.Projectile_Summoner_C");
		return ptr;
	}


	void OnExplode(struct FHitResult* Result);
	void UserConstructionScript();
	void ExecuteUbergraph_Projectile_Summoner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
