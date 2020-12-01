#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_PipeFlex_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_PipeFlex_Metal.PrimalItemStructure_PipeFlex_Metal_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_PipeFlex_Metal_C : public UPrimalItemStructure_BaseStonePipe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_PipeFlex_Metal.PrimalItemStructure_PipeFlex_Metal_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_PipeFlex_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
