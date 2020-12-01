#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoisonousPlant_Biolum_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PoisonousPlant_Biolum.Buff_PoisonousPlant_Biolum_C
// 0x0000 (0x0944 - 0x0944)
class ABuff_PoisonousPlant_Biolum_C : public ABuff_PoisonousTrap_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PoisonousPlant_Biolum.Buff_PoisonousPlant_Biolum_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PoisonousPlant_Biolum(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
