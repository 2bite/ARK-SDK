// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RaftSplash_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RaftSplash.RaftSplash_C.UserConstructionScript
// ()

void ARaftSplash_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RaftSplash.RaftSplash_C.UserConstructionScript");

	ARaftSplash_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RaftSplash.RaftSplash_C.ExecuteUbergraph_RaftSplash
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARaftSplash_C::ExecuteUbergraph_RaftSplash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RaftSplash.RaftSplash_C.ExecuteUbergraph_RaftSplash");

	ARaftSplash_C_ExecuteUbergraph_RaftSplash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
