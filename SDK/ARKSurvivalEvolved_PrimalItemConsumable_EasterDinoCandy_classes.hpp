#pragma once

// ARKSurvivalEvolved (320.18) SDK

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
// 0x0068 (0x0A68 - 0x0A00)
class UPrimalItemConsumable_EasterDinoCandy_C : public UPrimalItemConsumableEatable_C
{
public:
	TArray<int>                                        DyeItemIndices;                                           // 0x0A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      DyeItemWeights;                                           // 0x0A10(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        FallbackColorIDs;                                         // 0x0A20(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                PercentChance_Mastercraft;                                // 0x0A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PercentChance_Ascendant;                                  // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IconSaturation_Primitive;                                 // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IconSaturation_Mastercraft;                               // 0x0A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IconSaturation_Ascendant;                                 // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DinoSaturation_Primitive;                                 // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DinoSaturation_Mastercraft;                               // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DinoSaturation_Ascendant;                                 // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    AscendantIcon;                                            // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      CallFunc_Array_Add_NewItem_RefProperty;                   // 0x0A58(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

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
	class FString BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC);
	void ExecuteUbergraph_PrimalItemConsumable_EasterDinoCandy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
