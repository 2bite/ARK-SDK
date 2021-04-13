// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sheep_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sheep_Character_BP.Sheep_Character_BP_C.BPClampMaxHarvestHealth
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASheep_Character_BP_C::BPClampMaxHarvestHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.BPClampMaxHarvestHealth");

	ASheep_Character_BP_C_BPClampMaxHarvestHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sheep_Character_BP.Sheep_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASheep_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.BPTryMultiUse");

	ASheep_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sheep_Character_BP.Sheep_Character_BP_C.BPGetMultiUseEntries
// (NetRequest, Exec, Native, Private, NetServer, HasDefaults, NetClient)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ASheep_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.BPGetMultiUseEntries");

	ASheep_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Sheep_Character_BP.Sheep_Character_BP_C.Get Time Interval for Full Wool
// ()
// Parameters:
// float                          OutVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASheep_Character_BP_C::Get_Time_Interval_for_Full_Wool(float* OutVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.Get Time Interval for Full Wool");

	ASheep_Character_BP_C_Get_Time_Interval_for_Full_Wool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVal != nullptr)
		*OutVal = params.OutVal;
}


// Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoARKDownloadedBegin
// ()

void ASheep_Character_BP_C::BPDinoARKDownloadedBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoARKDownloadedBegin");

	ASheep_Character_BP_C_BPDinoARKDownloadedBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoPrepareForARKUploading
// ()

void ASheep_Character_BP_C::BPDinoPrepareForARKUploading()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoPrepareForARKUploading");

	ASheep_Character_BP_C_BPDinoPrepareForARKUploading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sheep_Character_BP.Sheep_Character_BP_C.SetWoolPercentage
// ()
// Parameters:
// float                          NewPercentage                  (Parm, ZeroConstructor, IsPlainOldData)

void ASheep_Character_BP_C::SetWoolPercentage(float NewPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.SetWoolPercentage");

	ASheep_Character_BP_C_SetWoolPercentage_Params params;
	params.NewPercentage = NewPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sheep_Character_BP.Sheep_Character_BP_C.DoHaircut
// ()
// Parameters:
// class AShooterCharacter**      FromPlayer                     (Parm, ZeroConstructor, IsPlainOldData)

void ASheep_Character_BP_C::DoHaircut(class AShooterCharacter** FromPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.DoHaircut");

	ASheep_Character_BP_C_DoHaircut_Params params;
	params.FromPlayer = FromPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoPostBeginPlay
// ()

void ASheep_Character_BP_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoPostBeginPlay");

	ASheep_Character_BP_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sheep_Character_BP.Sheep_Character_BP_C.BPUnstasis
// ()

void ASheep_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.BPUnstasis");

	ASheep_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sheep_Character_BP.Sheep_Character_BP_C.UpdateWoolMaterial
// ()

void ASheep_Character_BP_C::UpdateWoolMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.UpdateWoolMaterial");

	ASheep_Character_BP_C_UpdateWoolMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sheep_Character_BP.Sheep_Character_BP_C.BPTimerNonDedicated
// ()

void ASheep_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.BPTimerNonDedicated");

	ASheep_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sheep_Character_BP.Sheep_Character_BP_C.GetWoolPercentage
// ()
// Parameters:
// float                          OutPercent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASheep_Character_BP_C::GetWoolPercentage(float* OutPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.GetWoolPercentage");

	ASheep_Character_BP_C_GetWoolPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPercent != nullptr)
		*OutPercent = params.OutPercent;
}


// Function Sheep_Character_BP.Sheep_Character_BP_C.UserConstructionScript
// ()

void ASheep_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.UserConstructionScript");

	ASheep_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sheep_Character_BP.Sheep_Character_BP_C.DoSpawnHairParticles
// ()
// Parameters:
// struct FVector                 AtLoc                          (Parm, ZeroConstructor, IsPlainOldData)

void ASheep_Character_BP_C::DoSpawnHairParticles(const struct FVector& AtLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.DoSpawnHairParticles");

	ASheep_Character_BP_C_DoSpawnHairParticles_Params params;
	params.AtLoc = AtLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sheep_Character_BP.Sheep_Character_BP_C.ExecuteUbergraph_Sheep_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASheep_Character_BP_C::ExecuteUbergraph_Sheep_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP.Sheep_Character_BP_C.ExecuteUbergraph_Sheep_Character_BP");

	ASheep_Character_BP_C_ExecuteUbergraph_Sheep_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
