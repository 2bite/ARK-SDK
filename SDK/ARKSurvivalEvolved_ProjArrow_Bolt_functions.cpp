// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Bolt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArrow_Bolt.ProjArrow_Bolt_C.UserConstructionScript
// ()

void AProjArrow_Bolt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Bolt.ProjArrow_Bolt_C.UserConstructionScript");

	AProjArrow_Bolt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_Bolt.ProjArrow_Bolt_C.ExecuteUbergraph_ProjArrow_Bolt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_Bolt_C::ExecuteUbergraph_ProjArrow_Bolt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Bolt.ProjArrow_Bolt_C.ExecuteUbergraph_ProjArrow_Bolt");

	AProjArrow_Bolt_C_ExecuteUbergraph_ProjArrow_Bolt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
