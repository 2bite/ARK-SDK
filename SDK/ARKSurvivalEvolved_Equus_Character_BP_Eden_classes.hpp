#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Equus_Character_BP_Eden_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equus_Character_BP_Eden.Equus_Character_BP_Eden_C
// 0x0000 (0x2433 - 0x2433)
class AEquus_Character_BP_Eden_C : public AEquus_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equus_Character_BP_Eden.Equus_Character_BP_Eden_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Equus_Character_BP_Eden(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
