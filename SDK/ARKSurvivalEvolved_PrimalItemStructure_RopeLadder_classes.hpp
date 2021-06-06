#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_RopeLadder_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_RopeLadder.PrimalItemStructure_RopeLadder_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_RopeLadder_C : public UPrimalItemStructure_BaseLadder_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_RopeLadder.PrimalItemStructure_RopeLadder_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_RopeLadder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
