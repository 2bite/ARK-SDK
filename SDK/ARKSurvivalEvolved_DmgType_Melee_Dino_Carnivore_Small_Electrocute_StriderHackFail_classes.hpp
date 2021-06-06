#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_Dino_Carnivore_Small_Electrocute_StriderHackFail_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_Dino_Carnivore_Small_Electrocute_StriderHackFail.DmgType_Melee_Dino_Carnivore_Small_Electrocute_StriderHackFail_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Melee_Dino_Carnivore_Small_Electrocute_StriderHackFail_C : public UDmgType_Melee_Dino_Carnivore_Small_Electrocute_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_Dino_Carnivore_Small_Electrocute_StriderHackFail.DmgType_Melee_Dino_Carnivore_Small_Electrocute_StriderHackFail_C");
		return ptr;
	}


	float BPAdjustDamage(class AActor** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
