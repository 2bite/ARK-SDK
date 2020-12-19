// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapGun_Silencer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapGun_Silencer.WeapGun_Silencer_C.UserConstructionScript
// ()

void AWeapGun_Silencer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGun_Silencer.WeapGun_Silencer_C.UserConstructionScript");

	AWeapGun_Silencer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGun_Silencer.WeapGun_Silencer_C.ExecuteUbergraph_WeapGun_Silencer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGun_Silencer_C::ExecuteUbergraph_WeapGun_Silencer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGun_Silencer.WeapGun_Silencer_C.ExecuteUbergraph_WeapGun_Silencer");

	AWeapGun_Silencer_C_ExecuteUbergraph_WeapGun_Silencer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
