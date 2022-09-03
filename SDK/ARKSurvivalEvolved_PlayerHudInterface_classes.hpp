#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlayerHudInterface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerHudInterface.PlayerHudInterface_C
// 0x0000 (0x0028 - 0x0028)
class UPlayerHudInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerHudInterface.PlayerHudInterface_C");
		return ptr;
	}


	void SetElementBarBoostIconHidden(bool isHidden);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
