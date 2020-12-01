#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Explosion_Demolition_TekCruiseMissile_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Explosion_Demolition_TekCruiseMissile.DmgType_Explosion_Demolition_TekCruiseMissile_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Explosion_Demolition_TekCruiseMissile_C : public UDmgType_Explosion_Demolition_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Explosion_Demolition_TekCruiseMissile.DmgType_Explosion_Demolition_TekCruiseMissile_C");
		return ptr;
	}


	float BPAdjustDamage(class AActor** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
