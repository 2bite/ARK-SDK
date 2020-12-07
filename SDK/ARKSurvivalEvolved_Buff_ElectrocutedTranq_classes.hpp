#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ElectrocutedTranq_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ElectrocutedTranq.Buff_ElectrocutedTranq_C
// 0x0000 (0x0968 - 0x0968)
class ABuff_ElectrocutedTranq_C : public ABuff_Stunned_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ElectrocutedTranq.Buff_ElectrocutedTranq_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ElectrocutedTranq(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
