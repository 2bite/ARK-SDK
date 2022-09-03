#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Projectile_Ice_Amarga_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Projectile_Ice_Amarga.DmgType_Projectile_Ice_Amarga_C
// 0x0000 (0x0140 - 0x0140)
class UDmgType_Projectile_Ice_Amarga_C : public UDmgType_Projectile_IceBreath_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Projectile_Ice_Amarga.DmgType_Projectile_Ice_Amarga_C");
		return ptr;
	}


	class UClass* OverrideBuffToGiveVictimCharacter(class APrimalCharacter** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser);
	void GetFreezeBuffAmountPerHit(class APrimalCharacter** Target, class AActor** DamageCauser, float* Result);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
