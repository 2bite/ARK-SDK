#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Projectile_Fire_Amarga_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Projectile_Fire_Amarga.DmgType_Projectile_Fire_Amarga_C
// 0x000B (0x013C - 0x0131)
class UDmgType_Projectile_Fire_Amarga_C : public UDmgType_Projectile_Fire_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              IgniteBuffAddTimePerHit;                                  // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IgniteBuffAmountAddPerHit;                                // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Projectile_Fire_Amarga.DmgType_Projectile_Fire_Amarga_C");
		return ptr;
	}


	class UClass* OverrideBuffToGiveVictimCharacter(class APrimalCharacter** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
