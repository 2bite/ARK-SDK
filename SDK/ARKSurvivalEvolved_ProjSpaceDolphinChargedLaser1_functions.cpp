// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSpaceDolphinChargedLaser1_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjSpaceDolphinChargedLaser1.ProjSpaceDolphinChargedLaser1_C.UserConstructionScript
// ()

void AProjSpaceDolphinChargedLaser1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser1.ProjSpaceDolphinChargedLaser1_C.UserConstructionScript");

	AProjSpaceDolphinChargedLaser1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSpaceDolphinChargedLaser1.ProjSpaceDolphinChargedLaser1_C.ExecuteUbergraph_ProjSpaceDolphinChargedLaser1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjSpaceDolphinChargedLaser1_C::ExecuteUbergraph_ProjSpaceDolphinChargedLaser1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser1.ProjSpaceDolphinChargedLaser1_C.ExecuteUbergraph_ProjSpaceDolphinChargedLaser1");

	AProjSpaceDolphinChargedLaser1_C_ExecuteUbergraph_ProjSpaceDolphinChargedLaser1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
