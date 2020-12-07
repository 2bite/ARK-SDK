// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FenceFoundation_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FenceFoundation_Stone.FenceFoundation_Stone_C.UserConstructionScript
// ()

void AFenceFoundation_Stone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FenceFoundation_Stone.FenceFoundation_Stone_C.UserConstructionScript");

	AFenceFoundation_Stone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FenceFoundation_Stone.FenceFoundation_Stone_C.ExecuteUbergraph_FenceFoundation_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFenceFoundation_Stone_C::ExecuteUbergraph_FenceFoundation_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FenceFoundation_Stone.FenceFoundation_Stone_C.ExecuteUbergraph_FenceFoundation_Stone");

	AFenceFoundation_Stone_C_ExecuteUbergraph_FenceFoundation_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
