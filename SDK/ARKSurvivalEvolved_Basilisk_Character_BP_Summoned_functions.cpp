// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basilisk_Character_BP_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C.InitializeDive
// ()

void ABasilisk_Character_BP_Summoned_C::InitializeDive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C.InitializeDive");

	ABasilisk_Character_BP_Summoned_C_InitializeDive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C.FindNearbyEggs
// ()
// Parameters:
// bool*                          StartSeeking                   (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_Summoned_C::FindNearbyEggs(bool* StartSeeking)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C.FindNearbyEggs");

	ABasilisk_Character_BP_Summoned_C_FindNearbyEggs_Params params;
	params.StartSeeking = StartSeeking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C.UserConstructionScript
// ()

void ABasilisk_Character_BP_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C.UserConstructionScript");

	ABasilisk_Character_BP_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C.ExecuteUbergraph_Basilisk_Character_BP_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_Summoned_C::ExecuteUbergraph_Basilisk_Character_BP_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C.ExecuteUbergraph_Basilisk_Character_BP_Summoned");

	ABasilisk_Character_BP_Summoned_C_ExecuteUbergraph_Basilisk_Character_BP_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
