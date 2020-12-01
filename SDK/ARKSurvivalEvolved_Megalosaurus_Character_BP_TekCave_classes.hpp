#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megalosaurus_Character_BP_TekCave_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Megalosaurus_Character_BP_TekCave.Megalosaurus_Character_BP_TekCave_C
// 0x0000 (0x2563 - 0x2563)
class AMegalosaurus_Character_BP_TekCave_C : public AMegalosaurus_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Megalosaurus_Character_BP_TekCave.Megalosaurus_Character_BP_TekCave_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Megalosaurus_Character_BP_TekCave(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
