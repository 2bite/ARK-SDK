#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Ranged_DmgMetal_Mjolnir_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Ranged_DmgMetal_Mjolnir.DmgType_Ranged_DmgMetal_Mjolnir_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Ranged_DmgMetal_Mjolnir_C : public UDmgType_Melee_DmgMetal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Ranged_DmgMetal_Mjolnir.DmgType_Ranged_DmgMetal_Mjolnir_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif