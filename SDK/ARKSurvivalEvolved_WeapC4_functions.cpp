// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapC4_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapC4.WeapC4_C.UserConstructionScript
// ()

void AWeapC4_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapC4.WeapC4_C.UserConstructionScript");

	AWeapC4_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapC4.WeapC4_C.ExecuteUbergraph_WeapC4
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapC4_C::ExecuteUbergraph_WeapC4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapC4.WeapC4_C.ExecuteUbergraph_WeapC4");

	AWeapC4_C_ExecuteUbergraph_WeapC4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
