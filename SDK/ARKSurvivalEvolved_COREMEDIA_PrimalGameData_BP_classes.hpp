#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_COREMEDIA_PrimalGameData_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass COREMEDIA_PrimalGameData_BP.COREMEDIA_PrimalGameData_BP_C
// 0x0000 (0x20A0 - 0x20A0)
class UCOREMEDIA_PrimalGameData_BP_C : public UCORE_PrimalGameData_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass COREMEDIA_PrimalGameData_BP.COREMEDIA_PrimalGameData_BP_C");
		return ptr;
	}


	void BPMergeModGameData(class UPrimalGameData** AnotherGameData);
	void ExecuteUbergraph_COREMEDIA_PrimalGameData_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
