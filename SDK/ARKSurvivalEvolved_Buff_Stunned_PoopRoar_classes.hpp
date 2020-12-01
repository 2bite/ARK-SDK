#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Stunned_PoopRoar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Stunned_PoopRoar.Buff_Stunned_PoopRoar_C
// 0x0000 (0x0948 - 0x0948)
class ABuff_Stunned_PoopRoar_C : public ABuff_Stunned_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Stunned_PoopRoar.Buff_Stunned_PoopRoar_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Stunned_PoopRoar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
