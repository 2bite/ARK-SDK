// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekStriderCannon_STA_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjTekStriderCannon_STA.ProjTekStriderCannon_STA_C.UserConstructionScript
// ()

void AProjTekStriderCannon_STA_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekStriderCannon_STA.ProjTekStriderCannon_STA_C.UserConstructionScript");

	AProjTekStriderCannon_STA_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjTekStriderCannon_STA.ProjTekStriderCannon_STA_C.ExecuteUbergraph_ProjTekStriderCannon_STA
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjTekStriderCannon_STA_C::ExecuteUbergraph_ProjTekStriderCannon_STA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekStriderCannon_STA.ProjTekStriderCannon_STA_C.ExecuteUbergraph_ProjTekStriderCannon_STA");

	AProjTekStriderCannon_STA_C_ExecuteUbergraph_ProjTekStriderCannon_STA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
