// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFlameThrower_Impacts_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapFlameThrower_Impacts.WeapFlameThrower_Impacts_C.UserConstructionScript
// ()

void AWeapFlameThrower_Impacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlameThrower_Impacts.WeapFlameThrower_Impacts_C.UserConstructionScript");

	AWeapFlameThrower_Impacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlameThrower_Impacts.WeapFlameThrower_Impacts_C.ExecuteUbergraph_WeapFlameThrower_Impacts
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFlameThrower_Impacts_C::ExecuteUbergraph_WeapFlameThrower_Impacts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlameThrower_Impacts.WeapFlameThrower_Impacts_C.ExecuteUbergraph_WeapFlameThrower_Impacts");

	AWeapFlameThrower_Impacts_C_ExecuteUbergraph_WeapFlameThrower_Impacts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
