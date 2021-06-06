#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DungBeetle_AIController_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DungBeetle_AIController.DungBeetle_AIController_C
// 0x0000 (0x0919 - 0x0919)
class ADungBeetle_AIController_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DungBeetle_AIController.DungBeetle_AIController_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DungBeetle_AIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
