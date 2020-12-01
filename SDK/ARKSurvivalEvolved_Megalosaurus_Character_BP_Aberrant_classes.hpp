#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megalosaurus_Character_BP_Aberrant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Megalosaurus_Character_BP_Aberrant.Megalosaurus_Character_BP_Aberrant_C
// 0x0000 (0x24E3 - 0x24E3)
class AMegalosaurus_Character_BP_Aberrant_C : public AMegalosaurus_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Megalosaurus_Character_BP_Aberrant.Megalosaurus_Character_BP_Aberrant_C");
		return ptr;
	}


	void AllowNocturnalLogic(bool* Result);
	void UserConstructionScript();
	void ExecuteUbergraph_Megalosaurus_Character_BP_Aberrant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif