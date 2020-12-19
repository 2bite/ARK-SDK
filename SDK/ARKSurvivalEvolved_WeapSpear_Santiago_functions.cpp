// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSpear_Santiago_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSpear_Santiago.WeapSpear_Santiago_C.UserConstructionScript
// ()

void AWeapSpear_Santiago_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpear_Santiago.WeapSpear_Santiago_C.UserConstructionScript");

	AWeapSpear_Santiago_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSpear_Santiago.WeapSpear_Santiago_C.ExecuteUbergraph_WeapSpear_Santiago
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSpear_Santiago_C::ExecuteUbergraph_WeapSpear_Santiago(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpear_Santiago.WeapSpear_Santiago_C.ExecuteUbergraph_WeapSpear_Santiago");

	AWeapSpear_Santiago_C_ExecuteUbergraph_WeapSpear_Santiago_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
