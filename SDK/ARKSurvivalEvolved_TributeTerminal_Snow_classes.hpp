#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TributeTerminal_Snow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TributeTerminal_Snow.TributeTerminal_Snow_C
// 0x0008 (0x0DE0 - 0x0DD8)
class ATributeTerminal_Snow_C : public ATributeTerminal_Base_C
{
public:
	class UPrimalInventoryBP_TributeTerminal_Snow_C*   PrimalInventoryBP_TributeTerminal_Snow_C1;                // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TributeTerminal_Snow.TributeTerminal_Snow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TributeTerminal_Snow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
