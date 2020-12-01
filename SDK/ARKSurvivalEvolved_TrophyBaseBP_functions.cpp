// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TrophyBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TrophyBaseBP.TrophyBaseBP_C.UserConstructionScript
// ()

void ATrophyBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyBaseBP.TrophyBaseBP_C.UserConstructionScript");

	ATrophyBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyBaseBP.TrophyBaseBP_C.ExecuteUbergraph_TrophyBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATrophyBaseBP_C::ExecuteUbergraph_TrophyBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyBaseBP.TrophyBaseBP_C.ExecuteUbergraph_TrophyBaseBP");

	ATrophyBaseBP_C_ExecuteUbergraph_TrophyBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
