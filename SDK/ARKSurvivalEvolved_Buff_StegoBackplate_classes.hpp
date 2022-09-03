#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StegoBackplate_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_StegoBackplate.Buff_StegoBackplate_C
// 0x0021 (0x0999 - 0x0978)
class ABuff_StegoBackplate_C : public ABuff_Base_C
{
public:
	TEnumAsByte<E_StegoBackplateMode>                  StegoBackplateMode;                                       // 0x0978(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0979(0x0007) MISSED OFFSET
	class UTexture2D*                                  HardenedPlateIcon;                                        // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  SharpendPlateIcon;                                        // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  HeavyPlateIcon;                                           // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar;                                                   // 0x0998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_StegoBackplate.Buff_StegoBackplate_C");
		return ptr;
	}


	float BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification);
	struct FStatusValueModifierDescription STATIC_GetBuffDescription();
	void STATIC_Set_Backplate_Mode(TEnumAsByte<E_StegoBackplateMode> StegoBackplateMode);
	void GetBackplateMode(TEnumAsByte<E_StegoBackplateMode>* BackplateMode);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_StegoBackplate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
