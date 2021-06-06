// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSword_Scorched_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSword_Scorched.WeapSword_Scorched_C.UserConstructionScript
// ()

void AWeapSword_Scorched_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Scorched.WeapSword_Scorched_C.UserConstructionScript");

	AWeapSword_Scorched_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSword_Scorched.WeapSword_Scorched_C.ExecuteUbergraph_WeapSword_Scorched
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSword_Scorched_C::ExecuteUbergraph_WeapSword_Scorched(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Scorched.WeapSword_Scorched_C.ExecuteUbergraph_WeapSword_Scorched");

	AWeapSword_Scorched_C_ExecuteUbergraph_WeapSword_Scorched_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
