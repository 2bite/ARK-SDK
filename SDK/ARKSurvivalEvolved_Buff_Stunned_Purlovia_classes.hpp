#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Stunned_Purlovia_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Stunned_Purlovia.Buff_Stunned_Purlovia_C
// 0x0008 (0x0950 - 0x0948)
class ABuff_Stunned_Purlovia_C : public ABuff_Stunned_C
{
public:
	class APrimalCharacter*                            Attacker;                                                 // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Stunned_Purlovia.Buff_Stunned_Purlovia_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Stunned_Purlovia(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
