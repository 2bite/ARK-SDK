// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSickle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSickle.WeapSickle_C.UserConstructionScript
// ()

void AWeapSickle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSickle.WeapSickle_C.UserConstructionScript");

	AWeapSickle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSickle.WeapSickle_C.ExecuteUbergraph_WeapSickle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSickle_C::ExecuteUbergraph_WeapSickle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSickle.WeapSickle_C.ExecuteUbergraph_WeapSickle");

	AWeapSickle_C_ExecuteUbergraph_WeapSickle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
