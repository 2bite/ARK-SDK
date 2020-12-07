// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjBoomerang_Frisbee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjBoomerang_Frisbee.ProjBoomerang_Frisbee_C.UserConstructionScript
// ()

void AProjBoomerang_Frisbee_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBoomerang_Frisbee.ProjBoomerang_Frisbee_C.UserConstructionScript");

	AProjBoomerang_Frisbee_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjBoomerang_Frisbee.ProjBoomerang_Frisbee_C.ExecuteUbergraph_ProjBoomerang_Frisbee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjBoomerang_Frisbee_C::ExecuteUbergraph_ProjBoomerang_Frisbee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBoomerang_Frisbee.ProjBoomerang_Frisbee_C.ExecuteUbergraph_ProjBoomerang_Frisbee");

	AProjBoomerang_Frisbee_C_ExecuteUbergraph_ProjBoomerang_Frisbee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
