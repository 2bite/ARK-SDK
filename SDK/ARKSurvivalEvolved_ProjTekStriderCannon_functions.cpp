// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekStriderCannon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjTekStriderCannon.ProjTekStriderCannon_C.UserConstructionScript
// ()

void AProjTekStriderCannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekStriderCannon.ProjTekStriderCannon_C.UserConstructionScript");

	AProjTekStriderCannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjTekStriderCannon.ProjTekStriderCannon_C.ExecuteUbergraph_ProjTekStriderCannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjTekStriderCannon_C::ExecuteUbergraph_ProjTekStriderCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekStriderCannon.ProjTekStriderCannon_C.ExecuteUbergraph_ProjTekStriderCannon");

	AProjTekStriderCannon_C_ExecuteUbergraph_ProjTekStriderCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
