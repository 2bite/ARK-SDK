// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTekGrenade.WeapTekGrenade_C.UserConstructionScript
// ()

void AWeapTekGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenade.WeapTekGrenade_C.UserConstructionScript");

	AWeapTekGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenade.WeapTekGrenade_C.ExecuteUbergraph_WeapTekGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenade_C::ExecuteUbergraph_WeapTekGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenade.WeapTekGrenade_C.ExecuteUbergraph_WeapTekGrenade");

	AWeapTekGrenade_C_ExecuteUbergraph_WeapTekGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
