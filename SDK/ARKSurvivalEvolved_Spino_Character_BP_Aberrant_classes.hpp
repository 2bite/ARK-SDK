#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Spino_Character_BP_Aberrant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Spino_Character_BP_Aberrant.Spino_Character_BP_Aberrant_C
// 0x0000 (0x2473 - 0x2473)
class ASpino_Character_BP_Aberrant_C : public ASpino_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Spino_Character_BP_Aberrant.Spino_Character_BP_Aberrant_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Spino_Character_BP_Aberrant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
