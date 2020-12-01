#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_HazardSuit_Boots_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_HazardSuit_Boots.EngramEntry_HazardSuit_Boots_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_HazardSuit_Boots_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_HazardSuit_Boots.EngramEntry_HazardSuit_Boots_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_HazardSuit_Boots(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
