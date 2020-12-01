// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekExplosion_ShoulderCannon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekExplosion_ShoulderCannon.TekExplosion_ShoulderCannon_C.UserConstructionScript
// ()

void ATekExplosion_ShoulderCannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekExplosion_ShoulderCannon.TekExplosion_ShoulderCannon_C.UserConstructionScript");

	ATekExplosion_ShoulderCannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekExplosion_ShoulderCannon.TekExplosion_ShoulderCannon_C.ExecuteUbergraph_TekExplosion_ShoulderCannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekExplosion_ShoulderCannon_C::ExecuteUbergraph_TekExplosion_ShoulderCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekExplosion_ShoulderCannon.TekExplosion_ShoulderCannon_C.ExecuteUbergraph_TekExplosion_ShoulderCannon");

	ATekExplosion_ShoulderCannon_C_ExecuteUbergraph_TekExplosion_ShoulderCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
