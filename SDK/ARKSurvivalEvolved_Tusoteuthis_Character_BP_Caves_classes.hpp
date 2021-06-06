#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tusoteuthis_Character_BP_Caves_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tusoteuthis_Character_BP_Caves.Tusoteuthis_Character_BP_Caves_C
// 0x0000 (0x2789 - 0x2789)
class ATusoteuthis_Character_BP_Caves_C : public ATusoteuthis_Character_BP_CaveBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tusoteuthis_Character_BP_Caves.Tusoteuthis_Character_BP_Caves_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Tusoteuthis_Character_BP_Caves(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
