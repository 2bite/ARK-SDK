#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateExplosion_Level03_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrateExplosion_Level03.SupplyCrateExplosion_Level03_C
// 0x0000 (0x0518 - 0x0518)
class ASupplyCrateExplosion_Level03_C : public ASupplyCrateExplosion_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateExplosion_Level03.SupplyCrateExplosion_Level03_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrateExplosion_Level03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
