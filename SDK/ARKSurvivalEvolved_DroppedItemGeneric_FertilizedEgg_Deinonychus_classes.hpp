#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_FertilizedEgg_Deinonychus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_Deinonychus.DroppedItemGeneric_FertilizedEgg_Deinonychus_C
// 0x0000 (0x0740 - 0x0740)
class ADroppedItemGeneric_FertilizedEgg_Deinonychus_C : public ADroppedItemGeneric_FertilizedEgg_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_Deinonychus.DroppedItemGeneric_FertilizedEgg_Deinonychus_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_Deinonychus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
