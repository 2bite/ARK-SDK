// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCrossbow_Explosive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapCrossbow_Explosive.WeapCrossbow_Explosive_C.UserConstructionScript
// ()

void AWeapCrossbow_Explosive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Explosive.WeapCrossbow_Explosive_C.UserConstructionScript");

	AWeapCrossbow_Explosive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_Explosive.WeapCrossbow_Explosive_C.ExecuteUbergraph_WeapCrossbow_Explosive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCrossbow_Explosive_C::ExecuteUbergraph_WeapCrossbow_Explosive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Explosive.WeapCrossbow_Explosive_C.ExecuteUbergraph_WeapCrossbow_Explosive");

	AWeapCrossbow_Explosive_C_ExecuteUbergraph_WeapCrossbow_Explosive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
