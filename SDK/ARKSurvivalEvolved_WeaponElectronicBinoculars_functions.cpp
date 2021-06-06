// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeaponElectronicBinoculars_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponElectronicBinoculars.WeaponElectronicBinoculars_C.UserConstructionScript
// ()

void AWeaponElectronicBinoculars_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponElectronicBinoculars.WeaponElectronicBinoculars_C.UserConstructionScript");

	AWeaponElectronicBinoculars_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponElectronicBinoculars.WeaponElectronicBinoculars_C.ExecuteUbergraph_WeaponElectronicBinoculars
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponElectronicBinoculars_C::ExecuteUbergraph_WeaponElectronicBinoculars(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponElectronicBinoculars.WeaponElectronicBinoculars_C.ExecuteUbergraph_WeaponElectronicBinoculars");

	AWeaponElectronicBinoculars_C_ExecuteUbergraph_WeaponElectronicBinoculars_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
