// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGrenade_ValentineBear_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjGrenade_ValentineBear.ProjGrenade_ValentineBear_C.UserConstructionScript
// ()

void AProjGrenade_ValentineBear_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGrenade_ValentineBear.ProjGrenade_ValentineBear_C.UserConstructionScript");

	AProjGrenade_ValentineBear_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGrenade_ValentineBear.ProjGrenade_ValentineBear_C.ExecuteUbergraph_ProjGrenade_ValentineBear
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjGrenade_ValentineBear_C::ExecuteUbergraph_ProjGrenade_ValentineBear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGrenade_ValentineBear.ProjGrenade_ValentineBear_C.ExecuteUbergraph_ProjGrenade_ValentineBear");

	AProjGrenade_ValentineBear_C_ExecuteUbergraph_ProjGrenade_ValentineBear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif