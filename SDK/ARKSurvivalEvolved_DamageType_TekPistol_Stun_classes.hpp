#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DamageType_TekPistol_Stun_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageType_TekPistol_Stun.DamageType_TekPistol_Stun_C
// 0x0000 (0x0131 - 0x0131)
class UDamageType_TekPistol_Stun_C : public UDmgType_Instant_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageType_TekPistol_Stun.DamageType_TekPistol_Stun_C");
		return ptr;
	}


	void ExecuteUbergraph_DamageType_TekPistol_Stun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
