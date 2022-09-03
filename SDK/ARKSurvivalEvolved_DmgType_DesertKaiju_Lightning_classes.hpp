#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_DesertKaiju_Lightning_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_DesertKaiju_Lightning.DmgType_DesertKaiju_Lightning_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_DesertKaiju_Lightning_C : public UDmgType_Melee_Dino_Carnivore_Large_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_DesertKaiju_Lightning.DmgType_DesertKaiju_Lightning_C");
		return ptr;
	}


	float BPAdjustHarvestingDamage(class AActor** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
