#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateExplosion_Level35_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrateExplosion_Level35.SupplyCrateExplosion_Level35_C
// 0x0000 (0x0510 - 0x0510)
class ASupplyCrateExplosion_Level35_C : public ASupplyCrateExplosion_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateExplosion_Level35.SupplyCrateExplosion_Level35_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrateExplosion_Level35(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
