#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TurretMinigun_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TurretMinigun.PrimalItemStructure_TurretMinigun_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemStructure_TurretMinigun_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TurretMinigun.PrimalItemStructure_TurretMinigun_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TurretMinigun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
