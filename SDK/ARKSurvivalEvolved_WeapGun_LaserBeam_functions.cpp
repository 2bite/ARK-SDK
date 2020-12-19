// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapGun_LaserBeam_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapGun_LaserBeam.WeapGun_LaserBeam_C.UserConstructionScript
// ()

void AWeapGun_LaserBeam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGun_LaserBeam.WeapGun_LaserBeam_C.UserConstructionScript");

	AWeapGun_LaserBeam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGun_LaserBeam.WeapGun_LaserBeam_C.ExecuteUbergraph_WeapGun_LaserBeam
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGun_LaserBeam_C::ExecuteUbergraph_WeapGun_LaserBeam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGun_LaserBeam.WeapGun_LaserBeam_C.ExecuteUbergraph_WeapGun_LaserBeam");

	AWeapGun_LaserBeam_C_ExecuteUbergraph_WeapGun_LaserBeam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
