#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_EasterDinoCandy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_EasterDinoCandy.PrimalItemConsumable_EasterDinoCandy_C
// 0x0068 (0x0A18 - 0x09B0)
class UPrimalItemConsumable_EasterDinoCandy_C : public UPrimalItemConsumableEatable_C
{
public:
	TArray<int>                                        DyeItemIndices;                                           // 0x09B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      DyeItemWeights;                                           // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        FallbackColorIDs;                                         // 0x09D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                PercentChance_Mastercraft;                                // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PercentChance_Ascendant;                                  // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IconSaturation_Primitive;                                 // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IconSaturation_Mastercraft;                               // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IconSaturation_Ascendant;                                 // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DinoSaturation_Primitive;                                 // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DinoSaturation_Mastercraft;                               // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DinoSaturation_Ascendant;                                 // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    AscendantIcon;                                            // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      CallFunc_Array_Add_NewItem_RefProperty;                   // 0x0A08(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_EasterDinoCandy.PrimalItemConsumable_EasterDinoCandy_C");
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
	void ExecuteUbergraph_PrimalItemConsumable_EasterDinoCandy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
