#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megatherium_Character_BP_Eden_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Megatherium_Character_BP_Eden.Megatherium_Character_BP_Eden_C
// 0x0000 (0x2351 - 0x2351)
class AMegatherium_Character_BP_Eden_C : public AMegatherium_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Megatherium_Character_BP_Eden.Megatherium_Character_BP_Eden_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Megatherium_Character_BP_Eden(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
