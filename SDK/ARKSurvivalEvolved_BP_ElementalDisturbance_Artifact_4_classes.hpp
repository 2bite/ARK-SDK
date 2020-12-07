#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_ElementalDisturbance_Artifact_4_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ElementalDisturbance_Artifact_4.BP_ElementalDisturbance_Artifact_3_C
// 0x0000 (0x0650 - 0x0650)
class ABP_ElementalDisturbance_Artifact_3_C : public ABP_ElementalDisturbance_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ElementalDisturbance_Artifact_4.BP_ElementalDisturbance_Artifact_3_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_ElementalDisturbance_Artifact_4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
