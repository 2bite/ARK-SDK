#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoisonImmunity_Biolum_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PoisonImmunity_Biolum.Buff_PoisonImmunity_Biolum_C
// 0x0000 (0x0958 - 0x0958)
class ABuff_PoisonImmunity_Biolum_C : public ABuff_PoisonImmunity_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PoisonImmunity_Biolum.Buff_PoisonImmunity_Biolum_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PoisonImmunity_Biolum(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
