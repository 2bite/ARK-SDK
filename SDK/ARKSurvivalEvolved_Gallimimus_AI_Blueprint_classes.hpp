#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gallimimus_AI_Blueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gallimimus_AI_Blueprint.Gallimimus_AI_Blueprint_C
// 0x0000 (0x0919 - 0x0919)
class AGallimimus_AI_Blueprint_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gallimimus_AI_Blueprint.Gallimimus_AI_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Gallimimus_AI_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
