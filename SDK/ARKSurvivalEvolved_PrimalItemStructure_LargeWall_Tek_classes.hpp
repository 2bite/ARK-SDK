#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_LargeWall_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_LargeWall_Tek.PrimalItemStructure_LargeWall_Tek_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemStructure_LargeWall_Tek_C : public UPrimalItemStructure_BaseWall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_LargeWall_Tek.PrimalItemStructure_LargeWall_Tek_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_LargeWall_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
