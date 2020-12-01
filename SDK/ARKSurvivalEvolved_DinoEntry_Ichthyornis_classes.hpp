#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Ichthyornis_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Ichthyornis.DinoEntry_Ichthyornis_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Ichthyornis_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Ichthyornis.DinoEntry_Ichthyornis_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Ichthyornis(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
