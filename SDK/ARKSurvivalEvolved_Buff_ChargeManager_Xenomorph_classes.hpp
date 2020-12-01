#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeManager_Xenomorph_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C
// 0x0000 (0x0A00 - 0x0A00)
class ABuff_ChargeManager_Xenomorph_C : public ABuff_ChargeManager_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C");
		return ptr;
	}


	void AddChargeSource(class ABuff_ChargeEmitter_C** Source);
	void OnChargeEvent();
	void CanReceive_Charge(bool* canReceive);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChargeManager_Xenomorph(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
