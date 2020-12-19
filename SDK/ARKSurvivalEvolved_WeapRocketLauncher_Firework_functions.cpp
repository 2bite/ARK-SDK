// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapRocketLauncher_Firework_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapRocketLauncher_Firework.WeapRocketLauncher_Firework_C.UserConstructionScript
// ()

void AWeapRocketLauncher_Firework_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRocketLauncher_Firework.WeapRocketLauncher_Firework_C.UserConstructionScript");

	AWeapRocketLauncher_Firework_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapRocketLauncher_Firework.WeapRocketLauncher_Firework_C.ExecuteUbergraph_WeapRocketLauncher_Firework
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapRocketLauncher_Firework_C::ExecuteUbergraph_WeapRocketLauncher_Firework(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRocketLauncher_Firework.WeapRocketLauncher_Firework_C.ExecuteUbergraph_WeapRocketLauncher_Firework");

	AWeapRocketLauncher_Firework_C_ExecuteUbergraph_WeapRocketLauncher_Firework_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
