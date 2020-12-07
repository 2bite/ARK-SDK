#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BASE_PrimalGameData_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C
// 0x0000 (0x2000 - 0x2000)
class UBASE_PrimalGameData_BP_C : public UCOREMEDIA_PrimalGameData_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C");
		return ptr;
	}


	void BPMergeModGameData(class UPrimalGameData* AnotherGameData);
	void ExecuteUbergraph_BASE_PrimalGameData_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
