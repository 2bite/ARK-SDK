#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoisonousPlant_Element_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PoisonousPlant_Element.Buff_PoisonousPlant_Element_C
// 0x0010 (0x08C4 - 0x08B4)
class ABuff_PoisonousPlant_Element_C : public ABuff_PoisonousTrap_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	class UClass*                                      chargeBuff;                                               // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaminaValueOnSetup;                                      // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PoisonousPlant_Element.Buff_PoisonousPlant_Element_C");
		return ptr;
	}


	void BPSetupForInstigator(class AActor** ForInstigator);
	void BPActivated(class AActor** ForInstigator);
	float BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PoisonousPlant_Element(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif