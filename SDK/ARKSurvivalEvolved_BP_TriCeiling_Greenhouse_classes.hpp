#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_TriCeiling_Greenhouse_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TriCeiling_Greenhouse.BP_TriCeiling_Greenhouse_C
// 0x0000 (0x0AF8 - 0x0AF8)
class ABP_TriCeiling_Greenhouse_C : public ABase_Ceiling_Tri_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TriCeiling_Greenhouse.BP_TriCeiling_Greenhouse_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_TriCeiling_Greenhouse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
