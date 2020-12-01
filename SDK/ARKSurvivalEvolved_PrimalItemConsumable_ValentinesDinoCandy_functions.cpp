// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_ValentinesDinoCandy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.GetBuffSpeedPercentage
// ()
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_ValentinesDinoCandy_C::GetBuffSpeedPercentage(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.GetBuffSpeedPercentage");

	UPrimalItemConsumable_ValentinesDinoCandy_C_GetBuffSpeedPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.BPInitIconMaterial
// ()

void UPrimalItemConsumable_ValentinesDinoCandy_C::BPInitIconMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.BPInitIconMaterial");

	UPrimalItemConsumable_ValentinesDinoCandy_C_BPInitIconMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.GetDyeItemDescriptiveName
// ()
// Parameters:
// class UPrimalGameData*         GameData                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  DescriptiveNameBase            (Parm, OutParm, ZeroConstructor)

void UPrimalItemConsumable_ValentinesDinoCandy_C::GetDyeItemDescriptiveName(class UPrimalGameData* GameData, int A, class FString* DescriptiveNameBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.GetDyeItemDescriptiveName");

	UPrimalItemConsumable_ValentinesDinoCandy_C_GetDyeItemDescriptiveName_Params params;
	params.GameData = GameData;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DescriptiveNameBase != nullptr)
		*DescriptiveNameBase = params.DescriptiveNameBase;
}


// Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.GetInvertedWeights
// ()
// Parameters:
// TArray<float>                  Weights                        (Parm, OutParm, ZeroConstructor)

void UPrimalItemConsumable_ValentinesDinoCandy_C::GetInvertedWeights(TArray<float>* Weights)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.GetInvertedWeights");

	UPrimalItemConsumable_ValentinesDinoCandy_C_GetInvertedWeights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weights != nullptr)
		*Weights = params.Weights;
}


// Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.BPPreUseItem
// ()

void UPrimalItemConsumable_ValentinesDinoCandy_C::BPPreUseItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.BPPreUseItem");

	UPrimalItemConsumable_ValentinesDinoCandy_C_BPPreUseItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.BPInitItemColors
// ()
// Parameters:
// TArray<int>                    ColorIDs                       (Parm, OutParm, ZeroConstructor)

void UPrimalItemConsumable_ValentinesDinoCandy_C::BPInitItemColors(TArray<int>* ColorIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.BPInitItemColors");

	UPrimalItemConsumable_ValentinesDinoCandy_C_BPInitItemColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ColorIDs != nullptr)
		*ColorIDs = params.ColorIDs;
}


// Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.BPPostAddBuffToGiveOwnerCharacter
// ()
// Parameters:
// class APrimalCharacter**       OwnerCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff**            Buff                           (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_ValentinesDinoCandy_C::BPPostAddBuffToGiveOwnerCharacter(class APrimalCharacter** OwnerCharacter, class APrimalBuff** Buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.BPPostAddBuffToGiveOwnerCharacter");

	UPrimalItemConsumable_ValentinesDinoCandy_C_BPPostAddBuffToGiveOwnerCharacter_Params params;
	params.OwnerCharacter = OwnerCharacter;
	params.Buff = Buff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.BPGetItemDescription
// (Net, Native, Event, Private, Protected, HasDefaults, DLLImport, Const, NetValidate)
// Parameters:
// class FString*                 InDescription                  (Parm, ZeroConstructor)
// bool*                          bGetLongDescription            (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItemConsumable_ValentinesDinoCandy_C::BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.BPGetItemDescription");

	UPrimalItemConsumable_ValentinesDinoCandy_C_BPGetItemDescription_Params params;
	params.InDescription = InDescription;
	params.bGetLongDescription = bGetLongDescription;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.ExecuteUbergraph_PrimalItemConsumable_ValentinesDinoCandy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_ValentinesDinoCandy_C::ExecuteUbergraph_PrimalItemConsumable_ValentinesDinoCandy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_ValentinesDinoCandy.PrimalItemConsumable_ValentinesDinoCandy_C.ExecuteUbergraph_PrimalItemConsumable_ValentinesDinoCandy");

	UPrimalItemConsumable_ValentinesDinoCandy_C_ExecuteUbergraph_PrimalItemConsumable_ValentinesDinoCandy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
