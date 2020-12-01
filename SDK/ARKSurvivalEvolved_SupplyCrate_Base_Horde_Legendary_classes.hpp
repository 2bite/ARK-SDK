#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Base_Horde_Legendary_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrate_Base_Horde_Legendary.SupplyCrate_Base_Horde_Legendary_C
// 0x0000 (0x1FA0 - 0x1FA0)
class ASupplyCrate_Base_Horde_Legendary_C : public ASupplyCrate_Horde_MeteorBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrate_Base_Horde_Legendary.SupplyCrate_Base_Horde_Legendary_C");
		return ptr;
	}


	void STATIC_OnRep_bHasLanded();
	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrate_Base_Horde_Legendary(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
