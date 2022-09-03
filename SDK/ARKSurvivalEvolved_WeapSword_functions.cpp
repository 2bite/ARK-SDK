// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSword_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSword.WeapSword_C.UserConstructionScript
// ()

void AWeapSword_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword.WeapSword_C.UserConstructionScript");

	AWeapSword_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSword.WeapSword_C.ExecuteUbergraph_WeapSword
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSword_C::ExecuteUbergraph_WeapSword(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword.WeapSword_C.ExecuteUbergraph_WeapSword");

	AWeapSword_C_ExecuteUbergraph_WeapSword_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
