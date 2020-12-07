#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Moschops_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Moschops.DinoEntry_Moschops_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Moschops_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Moschops.DinoEntry_Moschops_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Moschops(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
