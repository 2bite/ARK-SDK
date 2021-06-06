#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_GasBursts_Volcano_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_GasBursts_Volcano.Buff_GasBursts_Volcano_C
// 0x0000 (0x0960 - 0x0960)
class ABuff_GasBursts_Volcano_C : public ABuff_Base_GasMaskable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_GasBursts_Volcano.Buff_GasBursts_Volcano_C");
		return ptr;
	}


	float BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification);
	void BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_GasBursts_Volcano(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
