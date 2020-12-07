#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_StonePick_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_StonePick.DmgType_Melee_StonePick_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Melee_StonePick_C : public UDmgType_Melee_BasePick_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_StonePick.DmgType_Melee_StonePick_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
