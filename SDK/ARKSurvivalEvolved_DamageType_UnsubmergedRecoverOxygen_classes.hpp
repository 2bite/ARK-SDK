#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DamageType_UnsubmergedRecoverOxygen_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageType_UnsubmergedRecoverOxygen.DamageType_UnsubmergedRecoverOxygen_C
// 0x0000 (0x0128 - 0x0128)
class UDamageType_UnsubmergedRecoverOxygen_C : public UShooterDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageType_UnsubmergedRecoverOxygen.DamageType_UnsubmergedRecoverOxygen_C");
		return ptr;
	}


	void ExecuteUbergraph_DamageType_UnsubmergedRecoverOxygen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
