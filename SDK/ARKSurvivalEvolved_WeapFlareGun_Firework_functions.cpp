// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFlareGun_Firework_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapFlareGun_Firework.WeapFlareGun_Firework_C.UserConstructionScript
// ()

void AWeapFlareGun_Firework_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlareGun_Firework.WeapFlareGun_Firework_C.UserConstructionScript");

	AWeapFlareGun_Firework_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlareGun_Firework.WeapFlareGun_Firework_C.ExecuteUbergraph_WeapFlareGun_Firework
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFlareGun_Firework_C::ExecuteUbergraph_WeapFlareGun_Firework(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlareGun_Firework.WeapFlareGun_Firework_C.ExecuteUbergraph_WeapFlareGun_Firework");

	AWeapFlareGun_Firework_C_ExecuteUbergraph_WeapFlareGun_Firework_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
