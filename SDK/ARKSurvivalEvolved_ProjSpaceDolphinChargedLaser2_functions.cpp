// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSpaceDolphinChargedLaser2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjSpaceDolphinChargedLaser2.ProjSpaceDolphinChargedLaser2_C.UserConstructionScript
// ()

void AProjSpaceDolphinChargedLaser2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser2.ProjSpaceDolphinChargedLaser2_C.UserConstructionScript");

	AProjSpaceDolphinChargedLaser2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSpaceDolphinChargedLaser2.ProjSpaceDolphinChargedLaser2_C.ExecuteUbergraph_ProjSpaceDolphinChargedLaser2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjSpaceDolphinChargedLaser2_C::ExecuteUbergraph_ProjSpaceDolphinChargedLaser2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser2.ProjSpaceDolphinChargedLaser2_C.ExecuteUbergraph_ProjSpaceDolphinChargedLaser2");

	AProjSpaceDolphinChargedLaser2_C_ExecuteUbergraph_ProjSpaceDolphinChargedLaser2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
