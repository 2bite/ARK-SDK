#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_GasBursts_Bog_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_GasBursts_Bog.Buff_GasBursts_Bog_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_GasBursts_Bog_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_GasBursts_Bog.Buff_GasBursts_Bog_C");
		return ptr;
	}


	float BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification);
	void BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_GasBursts_Bog(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
