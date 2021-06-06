#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Moth_Character_BP_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Moth_Character_BP_Base.Moth_Character_BP_Base_C
// 0x0000 (0x2268 - 0x2268)
class AMoth_Character_BP_Base_C : public ADino_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Moth_Character_BP_Base.Moth_Character_BP_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Moth_Character_BP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
