#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_Dino_GasBagsMelee_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_Dino_GasBagsMelee.DmgType_Melee_Dino_GasBagsMelee_C
// 0x000B (0x013C - 0x0131)
class UDmgType_Melee_Dino_GasBagsMelee_C : public UDmgType_Melee_Dino_Herbivore_Medium_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              AggroMinimum;                                             // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AggroMultiplier;                                          // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_Dino_GasBagsMelee.DmgType_Melee_Dino_GasBagsMelee_C");
		return ptr;
	}


	float BPAdjustAggro(class APrimalDinoAIController** DamagedCharacterController, class APrimalCharacter** DamagedCharacter, float* DesiredAggroValue, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
