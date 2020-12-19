#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForestAmbientSound_Blueprint_Small_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ForestAmbientSound_Blueprint_Small.ForestAmbientSound_Blueprint_Small_C
// 0x0000 (0x0498 - 0x0498)
class AForestAmbientSound_Blueprint_Small_C : public ADayCycleAmbientSound
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ForestAmbientSound_Blueprint_Small.ForestAmbientSound_Blueprint_Small_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ForestAmbientSound_Blueprint_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
