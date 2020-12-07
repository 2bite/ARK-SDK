#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateExplosion_Legendary_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrateExplosion_Legendary.SupplyCrateExplosion_Legendary_C
// 0x0000 (0x0518 - 0x0518)
class ASupplyCrateExplosion_Legendary_C : public ASupplyCrateExplosion_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateExplosion_Legendary.SupplyCrateExplosion_Legendary_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrateExplosion_Legendary(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
