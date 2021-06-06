// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPike_Santiago_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapPike_Santiago.WeapPike_Santiago_C.UserConstructionScript
// ()

void AWeapPike_Santiago_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPike_Santiago.WeapPike_Santiago_C.UserConstructionScript");

	AWeapPike_Santiago_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapPike_Santiago.WeapPike_Santiago_C.ExecuteUbergraph_WeapPike_Santiago
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapPike_Santiago_C::ExecuteUbergraph_WeapPike_Santiago(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPike_Santiago.WeapPike_Santiago_C.ExecuteUbergraph_WeapPike_Santiago");

	AWeapPike_Santiago_C_ExecuteUbergraph_WeapPike_Santiago_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
