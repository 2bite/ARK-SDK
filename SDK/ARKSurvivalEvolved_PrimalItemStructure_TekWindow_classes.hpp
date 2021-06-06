#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekWindow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TekWindow.PrimalItemStructure_TekWindow_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_TekWindow_C : public UPrimalItemStructure_BaseWindow_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TekWindow.PrimalItemStructure_TekWindow_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TekWindow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
