#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MiningDrill_ReduceWeights_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_MiningDrill_ReduceWeights.Buff_MiningDrill_ReduceWeights_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_MiningDrill_ReduceWeights_C : public ABuff_Base_OnlyRelevantToOwner_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MiningDrill_ReduceWeights.Buff_MiningDrill_ReduceWeights_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_MiningDrill_ReduceWeights(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
