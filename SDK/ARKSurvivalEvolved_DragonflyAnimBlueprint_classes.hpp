#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DragonflyAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass DragonflyAnimBlueprint.DragonflyAnimBlueprint_C
// 0x0000 (0x1198 - 0x1198)
class UDragonflyAnimBlueprint_C : public UDinoBlueprintBase_RootTransform_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DragonflyAnimBlueprint.DragonflyAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_DragonflyAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
