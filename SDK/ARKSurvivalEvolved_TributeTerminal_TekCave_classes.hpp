#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TributeTerminal_TekCave_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TributeTerminal_TekCave.TributeTerminal_TekCave_C
// 0x0008 (0x0E18 - 0x0E10)
class ATributeTerminal_TekCave_C : public ATributeTerminal_Base_C
{
public:
	class UPrimalInventoryBP_TekCaveTribute_C*         PrimalInventoryBP_TekCaveTribute_C1;                      // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TributeTerminal_TekCave.TributeTerminal_TekCave_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TributeTerminal_TekCave(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
