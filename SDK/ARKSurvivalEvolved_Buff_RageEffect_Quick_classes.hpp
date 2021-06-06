#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RageEffect_Quick_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RageEffect_Quick.Buff_RageEffect_Quick_C
// 0x0000 (0x0994 - 0x0994)
class ABuff_RageEffect_Quick_C : public ABuff_RageEffect_Ammonite_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RageEffect_Quick.Buff_RageEffect_Quick_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_RageEffect_Quick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
