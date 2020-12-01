// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjMudTrail_Corrupted_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjMudTrail_Corrupted.ProjMudTrail_Corrupted_C.UserConstructionScript
// ()

void AProjMudTrail_Corrupted_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMudTrail_Corrupted.ProjMudTrail_Corrupted_C.UserConstructionScript");

	AProjMudTrail_Corrupted_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjMudTrail_Corrupted.ProjMudTrail_Corrupted_C.ExecuteUbergraph_ProjMudTrail_Corrupted
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjMudTrail_Corrupted_C::ExecuteUbergraph_ProjMudTrail_Corrupted(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMudTrail_Corrupted.ProjMudTrail_Corrupted_C.ExecuteUbergraph_ProjMudTrail_Corrupted");

	AProjMudTrail_Corrupted_C_ExecuteUbergraph_ProjMudTrail_Corrupted_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
