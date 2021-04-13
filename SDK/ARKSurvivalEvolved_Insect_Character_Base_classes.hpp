#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Insect_Character_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Insect_Character_Base.Insect_Character_Base_C
// 0x0000 (0x2198 - 0x2198)
class AInsect_Character_Base_C : public ADino_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Insect_Character_Base.Insect_Character_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Insect_Character_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
