// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArrow.ProjArrow_C.UserConstructionScript
// ()

void AProjArrow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow.ProjArrow_C.UserConstructionScript");

	AProjArrow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow.ProjArrow_C.ExecuteUbergraph_ProjArrow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_C::ExecuteUbergraph_ProjArrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow.ProjArrow_C.ExecuteUbergraph_ProjArrow");

	AProjArrow_C_ExecuteUbergraph_ProjArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
