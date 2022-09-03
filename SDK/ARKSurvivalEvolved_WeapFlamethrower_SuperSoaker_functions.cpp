// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFlamethrower_SuperSoaker_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapFlamethrower_SuperSoaker.WeapFlamethrower_SuperSoaker_C.UserConstructionScript
// ()

void AWeapFlamethrower_SuperSoaker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlamethrower_SuperSoaker.WeapFlamethrower_SuperSoaker_C.UserConstructionScript");

	AWeapFlamethrower_SuperSoaker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlamethrower_SuperSoaker.WeapFlamethrower_SuperSoaker_C.ExecuteUbergraph_WeapFlamethrower_SuperSoaker
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFlamethrower_SuperSoaker_C::ExecuteUbergraph_WeapFlamethrower_SuperSoaker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlamethrower_SuperSoaker.WeapFlamethrower_SuperSoaker_C.ExecuteUbergraph_WeapFlamethrower_SuperSoaker");

	AWeapFlamethrower_SuperSoaker_C_ExecuteUbergraph_WeapFlamethrower_SuperSoaker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
