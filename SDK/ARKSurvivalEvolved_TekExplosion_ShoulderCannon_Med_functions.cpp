// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekExplosion_ShoulderCannon_Med_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekExplosion_ShoulderCannon_Med.TekExplosion_ShoulderCannon_Med_C.UserConstructionScript
// ()

void ATekExplosion_ShoulderCannon_Med_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekExplosion_ShoulderCannon_Med.TekExplosion_ShoulderCannon_Med_C.UserConstructionScript");

	ATekExplosion_ShoulderCannon_Med_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekExplosion_ShoulderCannon_Med.TekExplosion_ShoulderCannon_Med_C.ExecuteUbergraph_TekExplosion_ShoulderCannon_Med
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekExplosion_ShoulderCannon_Med_C::ExecuteUbergraph_TekExplosion_ShoulderCannon_Med(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekExplosion_ShoulderCannon_Med.TekExplosion_ShoulderCannon_Med_C.ExecuteUbergraph_TekExplosion_ShoulderCannon_Med");

	ATekExplosion_ShoulderCannon_Med_C_ExecuteUbergraph_TekExplosion_ShoulderCannon_Med_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
