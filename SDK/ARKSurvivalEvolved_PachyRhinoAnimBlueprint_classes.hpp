#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PachyRhinoAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass PachyRhinoAnimBlueprint.PachyRhinoAnimBlueprint_C
// 0x0000 (0x1630 - 0x1630)
class UPachyRhinoAnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PachyRhinoAnimBlueprint.PachyRhinoAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_PachyRhinoAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
