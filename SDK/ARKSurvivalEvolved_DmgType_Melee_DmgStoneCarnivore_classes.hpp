#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_DmgStoneCarnivore_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_DmgStoneCarnivore.DmgType_Melee_DmgStoneCarnivore_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Melee_DmgStoneCarnivore_C : public UDmgType_Melee_DmgStone_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_DmgStoneCarnivore.DmgType_Melee_DmgStoneCarnivore_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
