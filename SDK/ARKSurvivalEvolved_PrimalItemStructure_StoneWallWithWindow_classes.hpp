#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StoneWallWithWindow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_StoneWallWithWindow.PrimalItemStructure_StoneWallWithWindow_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemStructure_StoneWallWithWindow_C : public UPrimalItemStructure_BaseWallWithWindow_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_StoneWallWithWindow.PrimalItemStructure_StoneWallWithWindow_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_StoneWallWithWindow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
