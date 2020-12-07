#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructurePlacerBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructurePlacerBlueprint.StructurePlacerBlueprint_C
// 0x0008 (0x0510 - 0x0508)
class AStructurePlacerBlueprint_C : public APrimalStructurePlacer
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructurePlacerBlueprint.StructurePlacerBlueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StructurePlacerBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
