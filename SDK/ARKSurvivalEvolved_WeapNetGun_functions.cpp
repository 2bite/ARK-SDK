// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapNetGun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapNetGun.WeapNetGun_C.UserConstructionScript
// ()

void AWeapNetGun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapNetGun.WeapNetGun_C.UserConstructionScript");

	AWeapNetGun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapNetGun.WeapNetGun_C.ExecuteUbergraph_WeapNetGun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapNetGun_C::ExecuteUbergraph_WeapNetGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapNetGun.WeapNetGun_C.ExecuteUbergraph_WeapNetGun");

	AWeapNetGun_C_ExecuteUbergraph_WeapNetGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
