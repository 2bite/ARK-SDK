#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseWallWithWindow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_BaseWallWithWindow.PrimalItemStructure_BaseWallWithWindow_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemStructure_BaseWallWithWindow_C : public UPrimalItemStructure_BaseWall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_BaseWallWithWindow.PrimalItemStructure_BaseWallWithWindow_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_BaseWallWithWindow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
