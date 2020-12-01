// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FeedingTroughBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.UserConstructionScript
// ()

void AFeedingTroughBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.UserConstructionScript");

	AFeedingTroughBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ExecuteUbergraph_FeedingTroughBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFeedingTroughBaseBP_C::ExecuteUbergraph_FeedingTroughBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ExecuteUbergraph_FeedingTroughBaseBP");

	AFeedingTroughBaseBP_C_ExecuteUbergraph_FeedingTroughBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
