// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjCherufe_Fragment_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjCherufe_Fragment.ProjCherufe_Fragment_C.ReceiveBeginPlay
// ()

void AProjCherufe_Fragment_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCherufe_Fragment.ProjCherufe_Fragment_C.ReceiveBeginPlay");

	AProjCherufe_Fragment_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjCherufe_Fragment.ProjCherufe_Fragment_C.UserConstructionScript
// ()

void AProjCherufe_Fragment_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCherufe_Fragment.ProjCherufe_Fragment_C.UserConstructionScript");

	AProjCherufe_Fragment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjCherufe_Fragment.ProjCherufe_Fragment_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjCherufe_Fragment_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCherufe_Fragment.ProjCherufe_Fragment_C.OnExplode");

	AProjCherufe_Fragment_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjCherufe_Fragment.ProjCherufe_Fragment_C.ExecuteUbergraph_ProjCherufe_Fragment
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjCherufe_Fragment_C::ExecuteUbergraph_ProjCherufe_Fragment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCherufe_Fragment.ProjCherufe_Fragment_C.ExecuteUbergraph_ProjCherufe_Fragment");

	AProjCherufe_Fragment_C_ExecuteUbergraph_ProjCherufe_Fragment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
