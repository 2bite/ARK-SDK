// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedPistol_Scoped_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMachinedPistol_Scoped.WeapMachinedPistol_Scoped_C.UserConstructionScript
// ()

void AWeapMachinedPistol_Scoped_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol_Scoped.WeapMachinedPistol_Scoped_C.UserConstructionScript");

	AWeapMachinedPistol_Scoped_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedPistol_Scoped.WeapMachinedPistol_Scoped_C.ExecuteUbergraph_WeapMachinedPistol_Scoped
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedPistol_Scoped_C::ExecuteUbergraph_WeapMachinedPistol_Scoped(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol_Scoped.WeapMachinedPistol_Scoped_C.ExecuteUbergraph_WeapMachinedPistol_Scoped");

	AWeapMachinedPistol_Scoped_C_ExecuteUbergraph_WeapMachinedPistol_Scoped_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
