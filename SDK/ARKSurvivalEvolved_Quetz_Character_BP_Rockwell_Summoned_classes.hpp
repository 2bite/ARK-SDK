#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Quetz_Character_BP_Rockwell_Summoned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Quetz_Character_BP_Rockwell_Summoned.Quetz_Character_BP_Rockwell_Summoned_C
// 0x0000 (0x2278 - 0x2278)
class AQuetz_Character_BP_Rockwell_Summoned_C : public AQuetz_Character_BP_Rockwell_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quetz_Character_BP_Rockwell_Summoned.Quetz_Character_BP_Rockwell_Summoned_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Quetz_Character_BP_Rockwell_Summoned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
