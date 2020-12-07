// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedSniper_Laser_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMachinedSniper_Laser.WeapMachinedSniper_Laser_C.UserConstructionScript
// ()

void AWeapMachinedSniper_Laser_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedSniper_Laser.WeapMachinedSniper_Laser_C.UserConstructionScript");

	AWeapMachinedSniper_Laser_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedSniper_Laser.WeapMachinedSniper_Laser_C.ExecuteUbergraph_WeapMachinedSniper_Laser
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedSniper_Laser_C::ExecuteUbergraph_WeapMachinedSniper_Laser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedSniper_Laser.WeapMachinedSniper_Laser_C.ExecuteUbergraph_WeapMachinedSniper_Laser");

	AWeapMachinedSniper_Laser_C_ExecuteUbergraph_WeapMachinedSniper_Laser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
