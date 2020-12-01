// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFlareGun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapFlareGun.WeapFlareGun_C.UserConstructionScript
// ()

void AWeapFlareGun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlareGun.WeapFlareGun_C.UserConstructionScript");

	AWeapFlareGun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlareGun.WeapFlareGun_C.ExecuteUbergraph_WeapFlareGun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFlareGun_C::ExecuteUbergraph_WeapFlareGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlareGun.WeapFlareGun_C.ExecuteUbergraph_WeapFlareGun");

	AWeapFlareGun_C_ExecuteUbergraph_WeapFlareGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
