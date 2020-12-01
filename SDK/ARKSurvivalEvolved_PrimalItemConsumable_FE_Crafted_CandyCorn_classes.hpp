#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_FE_Crafted_CandyCorn_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_FE_Crafted_CandyCorn.PrimalItemConsumable_FE_Crafted_CandyCorn_C
// 0x0060 (0x09F0 - 0x0990)
class UPrimalItemConsumable_FE_Crafted_CandyCorn_C : public UPrimalItemConsumableEatable_C
{
public:
	TArray<int>                                        DyeItemIndices;                                           // 0x0990(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      DyeItemWeights;                                           // 0x09A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        FallbackColorIDs;                                         // 0x09B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                PercentChance_Mastercraft;                                // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PercentChance_Ascendant;                                  // 0x09C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IconSaturation_Primitive;                                 // 0x09C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IconSaturation_Mastercraft;                               // 0x09CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IconSaturation_Ascendant;                                 // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DinoSaturation_Primitive;                                 // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DinoSaturation_Mastercraft;                               // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DinoSaturation_Ascendant;                                 // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      CallFunc_Array_Add_NewItem_RefProperty;                   // 0x09E0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_FE_Crafted_CandyCorn.PrimalItemConsumable_FE_Crafted_CandyCorn_C");
		return ptr;
	}


	void GetBuffSpeedPercentage(float* Percent);
	void BPInitIconMaterial();
	void GetDyeItemDescriptiveName(class UPrimalGameData* GameData, int A, class FString* DescriptiveNameBase);
	void GetInvertedWeights(TArray<float>* Weights);
	void BPPreUseItem();
	void BPInitItemColors(TArray<int>* ColorIDs);
	void BPPostAddBuffToGiveOwnerCharacter(class APrimalCharacter** OwnerCharacter, class APrimalBuff** Buff);
	class FString STATIC_BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC);
	void ExecuteUbergraph_PrimalItemConsumable_FE_Crafted_CandyCorn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
