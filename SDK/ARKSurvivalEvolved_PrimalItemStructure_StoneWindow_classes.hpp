#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StoneWindow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_StoneWindow.PrimalItemStructure_StoneWindow_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemStructure_StoneWindow_C : public UPrimalItemStructure_BaseWindow_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_StoneWindow.PrimalItemStructure_StoneWindow_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_StoneWindow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
