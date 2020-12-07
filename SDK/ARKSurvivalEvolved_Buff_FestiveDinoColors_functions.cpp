// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FestiveDinoColors_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.AreColorArraysEqual
// ()
// Parameters:
// TArray<struct FLinearColor>    A                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>    B                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Equal                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_FestiveDinoColors_C::AreColorArraysEqual(TArray<struct FLinearColor>* A, TArray<struct FLinearColor>* B, bool* Equal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.AreColorArraysEqual");

	ABuff_FestiveDinoColors_C_AreColorArraysEqual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;
	if (B != nullptr)
		*B = params.B;
	if (Equal != nullptr)
		*Equal = params.Equal;
}


// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FestiveDinoColors_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.BPSetupForInstigator");

	ABuff_FestiveDinoColors_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.BPDinoRefreshColorization
// ()
// Parameters:
// TArray<struct FLinearColor>    DinoColors                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>    OverrideColors                 (Parm, OutParm, ZeroConstructor)

void ABuff_FestiveDinoColors_C::BPDinoRefreshColorization(TArray<struct FLinearColor>* DinoColors, TArray<struct FLinearColor>* OverrideColors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.BPDinoRefreshColorization");

	ABuff_FestiveDinoColors_C_BPDinoRefreshColorization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DinoColors != nullptr)
		*DinoColors = params.DinoColors;
	if (OverrideColors != nullptr)
		*OverrideColors = params.OverrideColors;
}


// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.UserConstructionScript
// ()

void ABuff_FestiveDinoColors_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.UserConstructionScript");

	ABuff_FestiveDinoColors_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.MultiUpdateColors
// ()
// Parameters:
// TArray<struct FLinearColor>    Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ItemQuality                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FestiveDinoColors_C::MultiUpdateColors(int ItemQuality, TArray<struct FLinearColor>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.MultiUpdateColors");

	ABuff_FestiveDinoColors_C_MultiUpdateColors_Params params;
	params.ItemQuality = ItemQuality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.UpdateColorsFromItem
// ()
// Parameters:
// TArray<struct FLinearColor>    ItemColors                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ItemQuality                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FestiveDinoColors_C::UpdateColorsFromItem(int ItemQuality, TArray<struct FLinearColor>* ItemColors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.UpdateColorsFromItem");

	ABuff_FestiveDinoColors_C_UpdateColorsFromItem_Params params;
	params.ItemQuality = ItemQuality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemColors != nullptr)
		*ItemColors = params.ItemColors;
}


// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.MultiUpdateAfterLoadSave
// ()
// Parameters:
// TArray<struct FLinearColor>    Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            CandyQuality                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FestiveDinoColors_C::MultiUpdateAfterLoadSave(int CandyQuality, TArray<struct FLinearColor>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.MultiUpdateAfterLoadSave");

	ABuff_FestiveDinoColors_C_MultiUpdateAfterLoadSave_Params params;
	params.CandyQuality = CandyQuality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.DelayedPostLoadUpdate
// ()

void ABuff_FestiveDinoColors_C::DelayedPostLoadUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.DelayedPostLoadUpdate");

	ABuff_FestiveDinoColors_C_DelayedPostLoadUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.ReceiveBeginPlay
// ()

void ABuff_FestiveDinoColors_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.ReceiveBeginPlay");

	ABuff_FestiveDinoColors_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.ExecuteUbergraph_Buff_FestiveDinoColors
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FestiveDinoColors_C::ExecuteUbergraph_Buff_FestiveDinoColors(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FestiveDinoColors.Buff_FestiveDinoColors_C.ExecuteUbergraph_Buff_FestiveDinoColors");

	ABuff_FestiveDinoColors_C_ExecuteUbergraph_Buff_FestiveDinoColors_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
