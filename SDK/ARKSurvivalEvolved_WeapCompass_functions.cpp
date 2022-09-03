// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCompass_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapCompass.WeapCompass_C.UserConstructionScript
// ()

void AWeapCompass_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCompass.WeapCompass_C.UserConstructionScript");

	AWeapCompass_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCompass.WeapCompass_C.ExecuteUbergraph_WeapCompass
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCompass_C::ExecuteUbergraph_WeapCompass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCompass.WeapCompass_C.ExecuteUbergraph_WeapCompass");

	AWeapCompass_C_ExecuteUbergraph_WeapCompass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
