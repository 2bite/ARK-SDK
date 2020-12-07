#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Achatina_AIController_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Achatina_AIController.Achatina_AIController_C
// 0x0000 (0x0919 - 0x0919)
class AAchatina_AIController_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Achatina_AIController.Achatina_AIController_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Achatina_AIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
