#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TributeTerminal_FZ_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_TributeTerminal_FZ.PrimalInventoryBP_TributeTerminal_FZ_C
// 0x0000 (0x0538 - 0x0538)
class UPrimalInventoryBP_TributeTerminal_FZ_C : public UPrimalInventoryBP_TributeTerminal_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TributeTerminal_FZ.PrimalInventoryBP_TributeTerminal_FZ_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_FZ(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
