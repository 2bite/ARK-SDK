#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Stunned_RaceWait_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C
// 0x0000 (0x0948 - 0x0948)
class ABuff_Stunned_RaceWait_C : public ABuff_Stunned_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C");
		return ptr;
	}


	void BuffTickServer(float* DeltaTime);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Stunned_RaceWait(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
