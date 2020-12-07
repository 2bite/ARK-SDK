// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gate_Stone_Large_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gate_Stone_Large.Gate_Stone_Large_C.UserConstructionScript
// ()

void AGate_Stone_Large_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gate_Stone_Large.Gate_Stone_Large_C.UserConstructionScript");

	AGate_Stone_Large_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gate_Stone_Large.Gate_Stone_Large_C.ExecuteUbergraph_Gate_Stone_Large
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGate_Stone_Large_C::ExecuteUbergraph_Gate_Stone_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gate_Stone_Large.Gate_Stone_Large_C.ExecuteUbergraph_Gate_Stone_Large");

	AGate_Stone_Large_C_ExecuteUbergraph_Gate_Stone_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
