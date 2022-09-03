// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjCatapultBoulder_Fire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.OnExplode
// (NetRequest, Exec, Native, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjCatapultBoulder_Fire_C::STATIC_OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.OnExplode");

	AProjCatapultBoulder_Fire_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.UserConstructionScript
// ()

void AProjCatapultBoulder_Fire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.UserConstructionScript");

	AProjCatapultBoulder_Fire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.ExecuteUbergraph_ProjCatapultBoulder_Fire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjCatapultBoulder_Fire_C::ExecuteUbergraph_ProjCatapultBoulder_Fire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.ExecuteUbergraph_ProjCatapultBoulder_Fire");

	AProjCatapultBoulder_Fire_C_ExecuteUbergraph_ProjCatapultBoulder_Fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
