#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_ThatchFloor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_ThatchFloor.PrimalItemStructure_ThatchFloor_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_ThatchFloor_C : public UPrimalItemStructure_BaseFloor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_ThatchFloor.PrimalItemStructure_ThatchFloor_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_ThatchFloor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
