#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_LargeWall_Adobe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_LargeWall_Adobe.PrimalItemStructure_LargeWall_Adobe_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_LargeWall_Adobe_C : public UPrimalItemStructure_BaseWall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_LargeWall_Adobe.PrimalItemStructure_LargeWall_Adobe_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_LargeWall_Adobe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
