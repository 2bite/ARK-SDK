#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TributeTerminal_Desert_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_TributeTerminal_Desert.PrimalInventoryBP_TributeTerminal_Desert_C
// 0x0000 (0x0538 - 0x0538)
class UPrimalInventoryBP_TributeTerminal_Desert_C : public UPrimalInventoryBP_TributeTerminal_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TributeTerminal_Desert.PrimalInventoryBP_TributeTerminal_Desert_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Desert(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
