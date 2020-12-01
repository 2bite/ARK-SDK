#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MiningDrill_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_MiningDrill.EngramEntry_MiningDrill_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_MiningDrill_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_MiningDrill.EngramEntry_MiningDrill_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_MiningDrill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
