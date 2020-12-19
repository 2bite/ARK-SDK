// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjPoisonSpore_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjPoisonSpore.ProjPoisonSpore_C.UserConstructionScript
// ()

void AProjPoisonSpore_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoisonSpore.ProjPoisonSpore_C.UserConstructionScript");

	AProjPoisonSpore_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjPoisonSpore.ProjPoisonSpore_C.ExecuteUbergraph_ProjPoisonSpore
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjPoisonSpore_C::ExecuteUbergraph_ProjPoisonSpore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoisonSpore.ProjPoisonSpore_C.ExecuteUbergraph_ProjPoisonSpore");

	AProjPoisonSpore_C_ExecuteUbergraph_ProjPoisonSpore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
