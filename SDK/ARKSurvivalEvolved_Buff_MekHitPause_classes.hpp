#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekHitPause_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_MekHitPause.Buff_MekHitPause_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_MekHitPause_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MekHitPause.Buff_MekHitPause_C");
		return ptr;
	}


	void BPDeactivated(class AActor** ForInstigator);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_MekHitPause(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
