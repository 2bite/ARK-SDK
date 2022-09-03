// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapRifle_LaserBeam_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapRifle_LaserBeam.WeapRifle_LaserBeam_C.UserConstructionScript
// ()

void AWeapRifle_LaserBeam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRifle_LaserBeam.WeapRifle_LaserBeam_C.UserConstructionScript");

	AWeapRifle_LaserBeam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapRifle_LaserBeam.WeapRifle_LaserBeam_C.ExecuteUbergraph_WeapRifle_LaserBeam
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapRifle_LaserBeam_C::ExecuteUbergraph_WeapRifle_LaserBeam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRifle_LaserBeam.WeapRifle_LaserBeam_C.ExecuteUbergraph_WeapRifle_LaserBeam");

	AWeapRifle_LaserBeam_C_ExecuteUbergraph_WeapRifle_LaserBeam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
