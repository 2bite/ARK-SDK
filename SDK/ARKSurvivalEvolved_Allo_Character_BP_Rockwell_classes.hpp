#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Allo_Character_BP_Rockwell_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Allo_Character_BP_Rockwell.Allo_Character_BP_Rockwell_C
// 0x0000 (0x2328 - 0x2328)
class AAllo_Character_BP_Rockwell_C : public AAllo_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Allo_Character_BP_Rockwell.Allo_Character_BP_Rockwell_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Allo_Character_BP_Rockwell(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
