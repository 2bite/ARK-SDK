#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekWallWithWindow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TekWallWithWindow.PrimalItemStructure_TekWallWithWindow_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemStructure_TekWallWithWindow_C : public UPrimalItemStructure_BaseWallWithWindow_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TekWallWithWindow.PrimalItemStructure_TekWallWithWindow_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TekWallWithWindow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
