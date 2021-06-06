#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Instant_Piercing_OneShotRifle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Instant_Piercing_OneShotRifle.DmgType_Instant_Piercing_OneShotRifle_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Instant_Piercing_OneShotRifle_C : public UDmgType_Instant_PiercingFull_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Instant_Piercing_OneShotRifle.DmgType_Instant_Piercing_OneShotRifle_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
