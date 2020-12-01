#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sheep_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sheep_AIController_BP.Sheep_AIController_BP_C
// 0x0000 (0x08E9 - 0x08E9)
class ASheep_AIController_BP_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sheep_AIController_BP.Sheep_AIController_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Sheep_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif