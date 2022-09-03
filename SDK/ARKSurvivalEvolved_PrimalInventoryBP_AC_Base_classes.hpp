#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_AC_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_AC_Base.PrimalInventoryBP_AC_Base_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_AC_Base_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_AC_Base.PrimalInventoryBP_AC_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_AC_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
