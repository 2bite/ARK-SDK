// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPike_Pitchfork_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapPike_Pitchfork.WeapPike_Pitchfork_C.UserConstructionScript
// ()

void AWeapPike_Pitchfork_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPike_Pitchfork.WeapPike_Pitchfork_C.UserConstructionScript");

	AWeapPike_Pitchfork_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapPike_Pitchfork.WeapPike_Pitchfork_C.ExecuteUbergraph_WeapPike_Pitchfork
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapPike_Pitchfork_C::ExecuteUbergraph_WeapPike_Pitchfork(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPike_Pitchfork.WeapPike_Pitchfork_C.ExecuteUbergraph_WeapPike_Pitchfork");

	AWeapPike_Pitchfork_C_ExecuteUbergraph_WeapPike_Pitchfork_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
