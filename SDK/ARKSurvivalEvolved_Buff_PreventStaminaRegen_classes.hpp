#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventStaminaRegen_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PreventStaminaRegen.Buff_PreventStaminaRegen_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_PreventStaminaRegen_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PreventStaminaRegen.Buff_PreventStaminaRegen_C");
		return ptr;
	}


	void BPSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PreventStaminaRegen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
