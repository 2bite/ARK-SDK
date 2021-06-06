#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Passive_GasMaskable_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Passive_GasMaskable.DmgType_Passive_GasMaskable_C
// 0x001B (0x014C - 0x0131)
class UDmgType_Passive_GasMaskable_C : public UDmgType_Passive_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	TArray<class UClass*>                              BlockDamageIfEquipped;                                    // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ArmorDurabilityDamage;                                    // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Passive_GasMaskable.DmgType_Passive_GasMaskable_C");
		return ptr;
	}


	float BPAdjustDamage(class AActor** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
