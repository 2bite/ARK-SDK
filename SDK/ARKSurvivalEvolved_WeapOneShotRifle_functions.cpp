// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapOneShotRifle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapOneShotRifle.WeapOneShotRifle_C.UserConstructionScript
// ()

void AWeapOneShotRifle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifle.WeapOneShotRifle_C.UserConstructionScript");

	AWeapOneShotRifle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapOneShotRifle.WeapOneShotRifle_C.ExecuteUbergraph_WeapOneShotRifle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapOneShotRifle_C::ExecuteUbergraph_WeapOneShotRifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifle.WeapOneShotRifle_C.ExecuteUbergraph_WeapOneShotRifle");

	AWeapOneShotRifle_C_ExecuteUbergraph_WeapOneShotRifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
