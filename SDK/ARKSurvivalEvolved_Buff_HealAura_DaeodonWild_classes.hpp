#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HealAura_DaeodonWild_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_HealAura_DaeodonWild.Buff_HealAura_DaeodonWild_C
// 0x0000 (0x0D51 - 0x0D51)
class ABuff_HealAura_DaeodonWild_C : public ABuff_HealAura_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_HealAura_DaeodonWild.Buff_HealAura_DaeodonWild_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_HealAura_DaeodonWild(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
