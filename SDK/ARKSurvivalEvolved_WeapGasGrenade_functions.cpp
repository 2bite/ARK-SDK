// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapGasGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapGasGrenade.WeapGasGrenade_C.UserConstructionScript
// ()

void AWeapGasGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGasGrenade.WeapGasGrenade_C.UserConstructionScript");

	AWeapGasGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGasGrenade.WeapGasGrenade_C.ExecuteUbergraph_WeapGasGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGasGrenade_C::ExecuteUbergraph_WeapGasGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGasGrenade.WeapGasGrenade_C.ExecuteUbergraph_WeapGasGrenade");

	AWeapGasGrenade_C_ExecuteUbergraph_WeapGasGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
