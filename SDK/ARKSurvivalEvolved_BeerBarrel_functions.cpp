// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BeerBarrel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BeerBarrel.BeerBarrel_C.UserConstructionScript
// ()

void ABeerBarrel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeerBarrel.BeerBarrel_C.UserConstructionScript");

	ABeerBarrel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeerBarrel.BeerBarrel_C.BPUpdateItemVisuals
// ()

void ABeerBarrel_C::BPUpdateItemVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeerBarrel.BeerBarrel_C.BPUpdateItemVisuals");

	ABeerBarrel_C_BPUpdateItemVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeerBarrel.BeerBarrel_C.ExecuteUbergraph_BeerBarrel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABeerBarrel_C::ExecuteUbergraph_BeerBarrel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeerBarrel.BeerBarrel_C.ExecuteUbergraph_BeerBarrel");

	ABeerBarrel_C_ExecuteUbergraph_BeerBarrel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
