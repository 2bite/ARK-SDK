// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjCherufe_Rock_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjCherufe_Rock.ProjCherufe_Rock_C.UserConstructionScript
// ()

void AProjCherufe_Rock_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCherufe_Rock.ProjCherufe_Rock_C.UserConstructionScript");

	AProjCherufe_Rock_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjCherufe_Rock.ProjCherufe_Rock_C.ExecuteUbergraph_ProjCherufe_Rock
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjCherufe_Rock_C::ExecuteUbergraph_ProjCherufe_Rock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCherufe_Rock.ProjCherufe_Rock_C.ExecuteUbergraph_ProjCherufe_Rock");

	AProjCherufe_Rock_C_ExecuteUbergraph_ProjCherufe_Rock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
