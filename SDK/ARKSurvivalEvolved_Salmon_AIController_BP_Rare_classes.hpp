#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Salmon_AIController_BP_Rare_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Salmon_AIController_BP_Rare.Salmon_AIController_BP_Rare_C
// 0x0000 (0x0919 - 0x0919)
class ASalmon_AIController_BP_Rare_C : public ASalmon_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Salmon_AIController_BP_Rare.Salmon_AIController_BP_Rare_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Salmon_AIController_BP_Rare(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
