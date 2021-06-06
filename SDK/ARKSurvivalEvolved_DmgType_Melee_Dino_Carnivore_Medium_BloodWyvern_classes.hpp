#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_Dino_Carnivore_Medium_BloodWyvern_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_Dino_Carnivore_Medium_BloodWyvern.DmgType_Melee_Dino_Carnivore_Medium_BloodWyvern_C
// 0x000F (0x0140 - 0x0131)
class UDmgType_Melee_Dino_Carnivore_Medium_BloodWyvern_C : public UDmgType_Melee_Dino_Carnivore_Medium_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	class UClass*                                      BuffClassForCauserOnDamagedCorpse;                        // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_Dino_Carnivore_Medium_BloodWyvern.DmgType_Melee_Dino_Carnivore_Medium_BloodWyvern_C");
		return ptr;
	}


	float BPAdjustDamage(class AActor** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
