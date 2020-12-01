#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_DmgMetal_TekSword_Mek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_DmgMetal_TekSword_Mek.DmgType_Melee_DmgMetal_TekSword_Mek_C
// 0x0007 (0x0138 - 0x0131)
class UDmgType_Melee_DmgMetal_TekSword_Mek_C : public UDmgType_Melee_DmgMetal_TekSword_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              VsTamedKaijuDmgMultiplier;                                // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_DmgMetal_TekSword_Mek.DmgType_Melee_DmgMetal_TekSword_Mek_C");
		return ptr;
	}


	float BPAdjustDamage(class AActor** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
