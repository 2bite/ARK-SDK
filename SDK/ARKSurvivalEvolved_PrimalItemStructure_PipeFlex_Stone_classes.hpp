#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_PipeFlex_Stone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_PipeFlex_Stone.PrimalItemStructure_PipeFlex_Stone_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemStructure_PipeFlex_Stone_C : public UPrimalItemStructure_BaseStonePipe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_PipeFlex_Stone.PrimalItemStructure_PipeFlex_Stone_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_PipeFlex_Stone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
