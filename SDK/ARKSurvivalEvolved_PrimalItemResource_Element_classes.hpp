#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Element_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Element.PrimalItemResource_Element_C
// 0x0020 (0x0B00 - 0x0AE0)
class UPrimalItemResource_Element_C : public UPrimalItemResourceGeneric_C
{
public:
	struct FName                                       ShapeshifterSmallsCustomTag;                              // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            PreviousShapeshifterClientValue;                          // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            ServerShapeshifterToFeed;                                 // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ShapeshifterBiglyCustomTag;                               // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Element.PrimalItemResource_Element_C");
		return ptr;
	}


	void BPServerHandleItemNetExecCommand(class AShooterPlayerController** ForPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void FindShapeshifter(class APrimalDinoCharacter** Shapeshifter, bool* RetMounted);
	void STATIC_BPPreUseItem();
	bool BPCanUse(bool* bIgnoreCooldown);
	bool BPSupportUseOntoItem(class UPrimalItem** DestinationItem);
	void BPUsedOntoItem(class UPrimalItem** DestinationItem, int* AdditionalData);
	void ExecuteUbergraph_PrimalItemResource_Element(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
