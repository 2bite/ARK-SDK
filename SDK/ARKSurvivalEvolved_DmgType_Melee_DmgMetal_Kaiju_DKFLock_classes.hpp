#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_DmgMetal_Kaiju_DKFLock_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_DmgMetal_Kaiju_DKFLock.DmgType_Melee_DmgMetal_Kaiju_DKFLock_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Melee_DmgMetal_Kaiju_DKFLock_C : public UDmgType_Melee_DmgMetal_RaidDino_Kaiju_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_DmgMetal_Kaiju_DKFLock.DmgType_Melee_DmgMetal_Kaiju_DKFLock_C");
		return ptr;
	}


	float BPAdjustDamage(class AActor** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
