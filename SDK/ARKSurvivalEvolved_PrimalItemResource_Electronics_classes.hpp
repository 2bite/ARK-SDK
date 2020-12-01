#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Electronics_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Electronics.PrimalItemResource_Electronics_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemResource_Electronics_C : public UPrimalItemResource_Craftable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Electronics.PrimalItemResource_Electronics_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Electronics(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
