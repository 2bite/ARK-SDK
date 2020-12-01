// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapGun_Scoped_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapGun_Scoped.WeapGun_Scoped_C.UserConstructionScript
// ()

void AWeapGun_Scoped_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGun_Scoped.WeapGun_Scoped_C.UserConstructionScript");

	AWeapGun_Scoped_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGun_Scoped.WeapGun_Scoped_C.ExecuteUbergraph_WeapGun_Scoped
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGun_Scoped_C::ExecuteUbergraph_WeapGun_Scoped(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGun_Scoped.WeapGun_Scoped_C.ExecuteUbergraph_WeapGun_Scoped");

	AWeapGun_Scoped_C_ExecuteUbergraph_WeapGun_Scoped_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
