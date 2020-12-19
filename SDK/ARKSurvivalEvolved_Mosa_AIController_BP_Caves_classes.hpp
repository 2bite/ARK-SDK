#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mosa_AIController_BP_Caves_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mosa_AIController_BP_Caves.Mosa_AIController_BP_Caves_C
// 0x0000 (0x0919 - 0x0919)
class AMosa_AIController_BP_Caves_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mosa_AIController_BP_Caves.Mosa_AIController_BP_Caves_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Mosa_AIController_BP_Caves(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
