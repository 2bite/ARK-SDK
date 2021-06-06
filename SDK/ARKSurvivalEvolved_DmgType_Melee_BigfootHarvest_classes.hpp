#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_BigfootHarvest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_BigfootHarvest.DmgType_Melee_BigfootHarvest_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Melee_BigfootHarvest_C : public UDmgType_Melee_Torpidity_Low_MetalWeapon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_BigfootHarvest.DmgType_Melee_BigfootHarvest_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
