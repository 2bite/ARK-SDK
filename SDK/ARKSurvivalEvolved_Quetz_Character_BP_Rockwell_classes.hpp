#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Quetz_Character_BP_Rockwell_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Quetz_Character_BP_Rockwell.Quetz_Character_BP_Rockwell_C
// 0x0000 (0x2298 - 0x2298)
class AQuetz_Character_BP_Rockwell_C : public AQuetz_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quetz_Character_BP_Rockwell.Quetz_Character_BP_Rockwell_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Quetz_Character_BP_Rockwell(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
