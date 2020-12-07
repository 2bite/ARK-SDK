#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Base_Horde_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrate_Base_Horde_Hard.SupplyCrate_Base_Horde_Hard_C
// 0x0000 (0x1FF0 - 0x1FF0)
class ASupplyCrate_Base_Horde_Hard_C : public ASupplyCrate_Horde_MeteorBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrate_Base_Horde_Hard.SupplyCrate_Base_Horde_Hard_C");
		return ptr;
	}


	void OnRep_bHasLanded();
	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrate_Base_Horde_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
