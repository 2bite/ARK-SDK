#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_FenceSupport_Stone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_FenceSupport_Stone.PrimalItemStructure_FenceSupport_Stone_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_FenceSupport_Stone_C : public UPrimalItemStructure_BaseFenceFoundation_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_FenceSupport_Stone.PrimalItemStructure_FenceSupport_Stone_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_FenceSupport_Stone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif