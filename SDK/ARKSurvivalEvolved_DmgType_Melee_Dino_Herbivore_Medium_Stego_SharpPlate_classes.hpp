#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_Dino_Herbivore_Medium_Stego_SharpPlate_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_Dino_Herbivore_Medium_Stego_SharpPlate.DmgType_Melee_Dino_Herbivore_Medium_Stego_SharpPlate_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Melee_Dino_Herbivore_Medium_Stego_SharpPlate_C : public UDmgType_Melee_Dino_Herbivore_Medium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_Dino_Herbivore_Medium_Stego_SharpPlate.DmgType_Melee_Dino_Herbivore_Medium_Stego_SharpPlate_C");
		return ptr;
	}


	float BPAdjustHarvestingDamage(class AActor** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
