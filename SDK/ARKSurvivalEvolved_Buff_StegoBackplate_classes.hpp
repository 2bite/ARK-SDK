#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x0021 (0x0971 - 0x0950)
class ABuff_StegoBackplate_C : public ABuff_Base_C
{
public:
	TEnumAsByte<E_StegoBackplateMode>                  StegoBackplateMode;                                       // 0x0950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0951(0x0007) MISSED OFFSET
	class UTexture2D*                                  HardenedPlateIcon;                                        // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  SharpendPlateIcon;                                        // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  HeavyPlateIcon;                                           // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar;                                                   // 0x0970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_StegoBackplate.Buff_StegoBackplate_C");
		return ptr;
	}


	struct FStatusValueModifierDescription GetBuffDescription();
	void Set_Backplate_Mode(TEnumAsByte<E_StegoBackplateMode> StegoBackplateMode);
	void GetBackplateMode(TEnumAsByte<E_StegoBackplateMode>* BackplateMode);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_StegoBackplate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
