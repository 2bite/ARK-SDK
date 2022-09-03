// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPike_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapPike.WeapPike_C.UserConstructionScript
// ()

void AWeapPike_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPike.WeapPike_C.UserConstructionScript");

	AWeapPike_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapPike.WeapPike_C.ExecuteUbergraph_WeapPike
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapPike_C::ExecuteUbergraph_WeapPike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPike.WeapPike_C.ExecuteUbergraph_WeapPike");

	AWeapPike_C_ExecuteUbergraph_WeapPike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
