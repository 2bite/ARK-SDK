// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapRocketLauncher_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapRocketLauncher.WeapRocketLauncher_C.UserConstructionScript
// ()

void AWeapRocketLauncher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRocketLauncher.WeapRocketLauncher_C.UserConstructionScript");

	AWeapRocketLauncher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapRocketLauncher.WeapRocketLauncher_C.ExecuteUbergraph_WeapRocketLauncher
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapRocketLauncher_C::ExecuteUbergraph_WeapRocketLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRocketLauncher.WeapRocketLauncher_C.ExecuteUbergraph_WeapRocketLauncher");

	AWeapRocketLauncher_C_ExecuteUbergraph_WeapRocketLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
